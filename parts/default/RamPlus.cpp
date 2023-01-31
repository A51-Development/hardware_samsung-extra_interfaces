/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "RamPlus.h"

namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

ndk::ScopedAStatus RamPlus::isMutexLocked(bool* /*_aidl_return*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus RamPlus::setSwapStatus(bool /*on*/, const std::shared_ptr<ISwapCallback>& /*cb*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus RamPlus::setSwapFileStatus(bool /*make*/, int32_t /*size*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
