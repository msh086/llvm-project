#include "llvm/Transforms/SCA/Secret.h"

using namespace llvm;

PreservedAnalyses SecretPass::run(Function &F,
                                      FunctionAnalysisManager &AM) {
  errs() << F.getName() << "\n";
  return PreservedAnalyses::all();
}
