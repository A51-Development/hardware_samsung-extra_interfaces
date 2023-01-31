/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <aidl/vendor/samsung_ext/hardware/parts/BnSysfsControl.h>

using ::aidl::vendor::samsung_ext::hardware::parts::SysfsType;

namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

class SysfsControl : public BnSysfsControl {
public:
    ndk::ScopedAStatus write(SysfsType type, ::android::String16 value) override;
    ndk::ScopedAStatus read(SysfsType type, ::android::String16* _aidl_return) override;
};

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
