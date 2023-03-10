/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "RamPlus.h"
#include "SysfsControl.h"
#include "SmartCharge.h"

#include <android/binder_manager.h>
#include <android/binder_process.h>
#include <android-base/logging.h>

using ::aidl::vendor::samsung_ext::hardware::parts::RamPlus;

int main() {
    ABinderProcess_setThreadPoolMaxThreadCount(0);
    auto ramplus = ndk::SharedRefBase::make<RamPlus>();

    const std::string instance = std::string() + RamPlus::descriptor + "/default";
    binder_status_t status = AServiceManager_addService(ramplus->asBinder().get(), instance.c_str());
    CHECK(status == STATUS_OK);

    ABinderProcess_joinThreadPool();
    return EXIT_FAILURE; // should not reach
}
