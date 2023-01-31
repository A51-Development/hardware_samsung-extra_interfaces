/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "SysfsControl.h"

namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

ndk::ScopedAStatus SysfsControl::write(SysfsType /*type*/, ::android::String16 /*value*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus SysfsControl::read(SysfsType /*type*/, ::android::String16* /*_aidl_return*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
