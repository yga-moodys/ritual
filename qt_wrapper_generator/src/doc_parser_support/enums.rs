use clang_cpp_data::EnumValue;
use cpp_type::CppType;

#[derive(Debug, PartialEq, Eq, Clone)]
pub enum CppTypeKind {
  CPrimitive,
  Enum {
    values: Vec<EnumValue>,
  },
  Flags {
    enum_name: String,
  },
  TypeDef {
    meaning: CppType,
  },
  Class {
    inherits: Option<CppType>,
  },
  Unknown,
}