// Copyright (C) 2022 Eureka Team
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

package vendor.samsung_ext.hardware.parts;

@Backing(type="int")
@VintfStability
enum SysfsType {
// Battery
    BATTERY_CAPACITY_MAX,
    BATTERY_TEMP,
    BATTERY_CAPACITY_CURRENT,
    BATTERY_CURRENT,
    BATTERY_FASTCHARGE,
    BATTERY_CHARGE,
// Display
    DISPLAY_DOUBLE_TAP,
//  DISPLAY_GLOVE_MODE, Supported by LOS Touch HAL
    DISPLAY_FINGERPRINT_ON_DISPLAY,
// Flashlight
    FLASHLIGHT_BRIGHTNESS,
}
