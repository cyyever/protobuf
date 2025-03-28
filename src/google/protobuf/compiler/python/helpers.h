// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef GOOGLE_PROTOBUF_COMPILER_PYTHON_HELPERS_H__
#define GOOGLE_PROTOBUF_COMPILER_PYTHON_HELPERS_H__

#include <string>

#include "absl/strings/str_replace.h"
#include <string_view>
#include "google/protobuf/descriptor.h"
#include "google/protobuf/descriptor.pb.h"

namespace google {
namespace protobuf {
namespace compiler {
namespace python {

std::string ModuleName(std::string_view filename);
std::string StrippedModuleName(std::string_view filename);
bool ContainsPythonKeyword(std::string_view module_name);
bool IsPythonKeyword(std::string_view name);
std::string ResolveKeyword(std::string_view name);
std::string GetFileName(const FileDescriptor* file_des,
                        std::string_view suffix);
bool HasGenericServices(const FileDescriptor* file);
std::string GeneratedCodeToBase64(const GeneratedCodeInfo& annotations);

template <typename DescriptorT>
std::string NamePrefixedWithNestedTypes(const DescriptorT& descriptor,
                                        std::string_view separator);

}  // namespace python
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_COMPILER_PYTHON_HELPERS_H__
