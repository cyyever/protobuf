// Copyright (c) 2009-2024, Google LLC
// All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

// This file contains common functionality used by names.h in other code
// generators.

#ifndef THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_
#define THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_

#include <string>

#include <string_view>

namespace upb {
namespace generator {

bool IsDescriptorProto(std::string_view filename);
std::string StripExtension(std::string_view fname);
std::string IncludeGuard(std::string_view filename);
std::string FileWarning(std::string_view filename);
std::string PadPrefix(std::string_view tag);

}  // namespace generator
}  // namespace upb

#endif  // THIRD_PARTY_UPB_UPB_GENERATOR_COMMON_NAMES_H_
