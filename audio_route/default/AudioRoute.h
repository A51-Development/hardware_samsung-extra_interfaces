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

#include <aidl/vendor/samsung_ext/hardware/audio_route/BnAudioRoute.h>

namespace aidl::vendor::samsung_ext::hardware::audio_route {

struct AudioRoute : public BnAudioRoute {
 public:
  AudioRoute() = default;
  // Methods from aidl::vendor::samsung_ext::hardware::fmradio::IFMRadio follow.
  ::ndk::ScopedAStatus setParam(const std::string& param) override;
};
} // namespace aidl::vendor::samsung_ext::hardware::fmradio
