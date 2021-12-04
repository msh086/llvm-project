#ifndef LLVM_TRANSFORMS_SCA_SECRET_H
#define LLVM_TRANSFORMS_SCA_SECRET_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class SecretPass : public PassInfoMixin<SecretPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_SCA_SECRET_H
