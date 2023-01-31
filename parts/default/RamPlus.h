/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <aidl/vendor/samsung_ext/hardware/parts/BnRamPlus.h>

using ::aidl::vendor::samsung_ext::hardware::parts::ISwapCallback;

namespace aidl {
namespace vendor {
namespace samsung_ext {
namespace hardware {
namespace parts {

class RamPlus : public BnRamPlus {
public:
    ndk::ScopedAStatus isMutexLocked(bool* _aidl_return) override;
    ndk::ScopedAStatus setSwapStatus(bool on, const std::shared_ptr<ISwapCallback>& cb) override;
    ndk::ScopedAStatus setSwapFileStatus(bool make, int32_t size) override;
};

} // namespace parts
} // namespace hardware
} // namespace samsung_ext
} // namespace vendor
} // namespace aidl
