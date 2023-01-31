/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <aidl/vendor/samsung_ext/hardware/parts/BnSmartCharge.h>



namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

class SmartCharge : public BnSmartCharge {
public:
    ndk::ScopedAStatus getLimitCnt(int32_t* _aidl_return) override;
    ndk::ScopedAStatus getRestartCnt(int32_t* _aidl_return) override;
    ndk::ScopedAStatus setConfig(int32_t limit, int32_t restart) override;
    ndk::ScopedAStatus start() override;
    ndk::ScopedAStatus stop() override;
};

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
