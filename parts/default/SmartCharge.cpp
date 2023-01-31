/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "SmartCharge.h"

namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

ndk::ScopedAStatus SmartCharge::getLimitCnt(int32_t* /*_aidl_return*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus SmartCharge::getRestartCnt(int32_t* /*_aidl_return*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus SmartCharge::setConfig(int32_t /*limit*/, int32_t /*restart*/) {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus SmartCharge::start() {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

ndk::ScopedAStatus SmartCharge::stop() {
    return ndk::ScopedAStatus::fromExceptionCode(EX_UNSUPPORTED_OPERATION);
}

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
