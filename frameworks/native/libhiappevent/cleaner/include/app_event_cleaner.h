/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HIAPPEVENT_FRAMEWORKS_NATIVE_LIB_HIAPPEVENT_CLEANER_APP_EVENT_CLEANER_H
#define HIAPPEVENT_FRAMEWORKS_NATIVE_LIB_HIAPPEVENT_CLEANER_APP_EVENT_CLEANER_H

#include <cstdint>
#include <string>

namespace OHOS {
namespace HiviewDFX {
class AppEventCleaner {
public:
    AppEventCleaner(const std::string& path) : path_(path) {}
    virtual ~AppEventCleaner() {}
    virtual uint64_t GetFilesSize() = 0;
    virtual uint64_t ClearSpace(uint64_t curSize, uint64_t maxSize) = 0;
    virtual void ClearData() = 0;

protected:
    std::string path_;
};
} // namespace HiviewDFX
} // namespace OHOS
#endif // HIAPPEVENT_FRAMEWORKS_NATIVE_LIB_HIAPPEVENT_CLEANER_APP_EVENT_CLEANER_H