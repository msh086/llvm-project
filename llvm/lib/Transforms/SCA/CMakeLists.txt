add_llvm_component_library(LLVMSecret
  Secret.cpp

  DEPENDS
  intrinsics_gen

  LINK_COMPONENTS
  Core
  Support
  )
