// Copyright (C) 2021 Eureka Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <aidl/vendor/samsung_ext/hardware/fmradio/BnFMDevControl.h>

#include "MiddleState.h"
#include <mutex>
#include <thread>

namespace aidl::vendor::samsung_ext::hardware::fmradio {

struct FMSupport : public BnFMDevControl {
public:
  FMSupport(void) { index = 0; };
  // Methods from aidl::vendor::samsung_ext::hardware::fmradio::IFMRadio follow.
  ::ndk::ScopedAStatus open(void) override;
  ::ndk::ScopedAStatus getValue(GetType type, int *_aidl_return) override;
  ::ndk::ScopedAStatus setValue(SetType type, int value) override;
  ::ndk::ScopedAStatus getFreqsList(std::vector<int> *_aidl_return) override;
  ::ndk::ScopedAStatus close(void) override;

private:
  std::timed_mutex lock;
  std::thread *search_thread;
  std::vector<int> freqs_list;
  unsigned int index;
  middlestate_t *kMiddleState;
};
} // namespace aidl::vendor::samsung_ext::hardware::fmradio
