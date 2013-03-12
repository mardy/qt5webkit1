// offlineasm input hash: 30c67cf68c5f6106cf8f6814d40c368e9fb54ead 6a6cfedfd9e8eb7d8b0d9f97b6e0c0b94882dc25 f46059305c0f42d46e7f8dae301cbeb1de0a5fc1
#if !OFFLINE_ASM_ARMv7s && OFFLINE_ASM_JSVALUE64 && !OFFLINE_ASM_BIG_ENDIAN && !OFFLINE_ASM_C_LOOP && !OFFLINE_ASM_ASSERT_ENABLED && !OFFLINE_ASM_ARMv7 && !OFFLINE_ASM_X86 && OFFLINE_ASM_X86_64 && !OFFLINE_ASM_EXECUTION_TRACING && OFFLINE_ASM_VALUE_PROFILER && OFFLINE_ASM_JIT_ENABLED && !OFFLINE_ASM_ALWAYS_ALLOCATE_SLOW
OFFLINE_ASM_BEGIN

OFFLINE_ASM_GLUE_LABEL(llint_begin)
    "\tmovl %eax, 3148725999\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:170
    "\txorq %rax, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:171
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:172

OFFLINE_ASM_GLUE_LABEL(llint_program_prologue)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_prologue__continue)
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_eval_prologue)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_0_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_0_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__recover)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:282

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_0_prologue__continue)
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_prologue)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:270
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:271
    "\tmovq 144(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:272
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_1_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_1_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:270
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:271
    "\tmovq 144(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:272

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_1_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForCallBegin)
    "\tmovl 72(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:338
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:339
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:341
    "\ttestq %rax, %rax\n"
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 976(%rdx), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:342
    "\timulq $40, %rax, %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:343
    "\tnegq %rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:344
    "\tsalq $3, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:345
    "\taddq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:346

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileLoop)
    "\tmovq -48(%r13, %rax, 1), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:349
    "\tsubq $40, %rbx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\tmovq %rcx, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\taddq $8, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:359
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:364
    "\tmovq 88(%rdx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:365
    "\tmovq 20104(%rcx), %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:366
    "\tsall $3, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:367
    "\taddq %r13, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:368
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:369
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionInitialization__stackHeightOK)
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_prologue)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:276
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 152(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_2_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:276
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 152(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionForConstructBegin)
    "\tmovl 72(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:338
    "\taddq $-1, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:339
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:341
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileDone) "\n"
    "\tmovq 976(%rdx), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:342
    "\timulq $40, %rax, %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:343
    "\tnegq %rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:344
    "\tsalq $3, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:345
    "\taddq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:346

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileLoop)
    "\tmovq -56(%r13, %rax, 1), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:349
    "\tsubq $40, %rbx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:350
    "\tmovq %rcx, 64(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:351
    "\taddq $8, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:359
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__argumentProfileLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__argumentProfileDone)
    "\tmovl 48(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:364
    "\tmovq 88(%rdx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:365
    "\tmovq 20104(%rcx), %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:366
    "\tsall $3, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:367
    "\taddq %r13, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:368
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:369
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_2_functionInitialization__stackHeightOK) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_stack_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_2_functionInitialization__stackHeightOK)
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_GLUE_LABEL(llint_function_for_call_arity_check)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:270
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:271
    "\tmovq 144(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:272
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_3_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_3_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:270
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:271
    "\tmovq 144(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:272

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_3_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    "\tmovl -48(%r13), %eax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:183
    "\tcmpl 72(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:187
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:188
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:189
    "\tmovq 20184(%rdx), %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:190
    "\tjmp *20192(%rdx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:191

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:194
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:195
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:196
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForCallBegin) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197

OFFLINE_ASM_GLUE_LABEL(llint_function_for_construct_arity_check)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq %rcx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:299
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:276
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 152(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278
    "\taddl $5, 3112(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:305
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_4_prologue__continue) "\n"
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_entry_osr_function_for_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:307
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:308
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_prologue__recover) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:309
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:311

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__recover)
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:276
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:277
    "\tmovq 152(%rdx), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:278

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_prologue__continue)
    "\tmovq %rdx, -8(%r13)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:286
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:320
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:321
    "\tmovl -48(%r13), %eax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:183
    "\tcmpl 72(%rdx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:184
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct_arityCheck) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:187
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:188
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_4_functionArityCheck__continue) "\n"
    "\tmovq 112(%rsp), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:189
    "\tmovq 20184(%rdx), %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:190
    "\tjmp *20192(%rdx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:191

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_functionArityCheck__continue)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:194
    "\tmovq 96(%rdx), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:195
    "\txorq %rsi, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:196
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_functionForConstructBegin) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:197

OFFLINE_ASM_OPCODE_LABEL(op_enter)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:205
    "\tmovl 52(%rcx), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:206
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:207
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opEnterDone) "\n"
    "\tmovq $10, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:208

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterLoop)
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:210
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:211
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:212
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opEnterLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opEnterDone)
    "\taddq $1, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:220
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateActivationDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateActivationDone)
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_lazy_reg)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:229
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:236
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opCreateArgumentsDone) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateArgumentsDone)
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_create_this)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:245
    "\tmovq 40(%rax), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:246
    "\ttestq %rcx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:247
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:392
    "\tmovq 88(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:393
    "\tmovq 8392(%rdx), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:396
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:397
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCreateThisSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:400
    "\tmovq %rbx, 8392(%rdx)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:401
    "\tmovq %rcx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:404
    "\tmovq $0, 8(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:405
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:250
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCreateThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_create_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_callee)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq -32(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:262
    "\tmovq %rdx, 24(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:264
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_convert_this)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:271
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:272
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:273
    "\tcmpb $17, 8(%rax)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:274
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opConvertThisSlow) "\n"
    "\tmovq 16(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opConvertThisSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_convert_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_object)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:286
    "\tmovq 32(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:287
    "\tmovq 1032(%rax), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:288
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:392
    "\tmovq 88(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:393
    "\tmovq 8392(%rcx), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:396
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:397
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewObjectSlow) "\n"
    "\tmovq 0(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:400
    "\tmovq %rbx, 8392(%rcx)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:401
    "\tmovq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:404
    "\tmovq $0, 8(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:405
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:291
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewObjectSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mov)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:304
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_not)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_4_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_4_loadConstantOrVariable__done)
    "\txorq $6, %rcx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:313
    "\ttestq $-2, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:314
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNotSlow) "\n"
    "\txorq $7, %rcx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:315
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:316
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNotSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_not) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_eq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__5_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__6_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:343
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:332
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:333
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_eq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_neq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__7_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalityComparison__loadConstantOrVariableInt32__8_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_8_equalityComparison__slow) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:349
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:332
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:333
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalityComparison__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_neq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_eq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:355
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:356
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:357
    "\ttestb $1, 9(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:358
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:359
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:360

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:362
    "\tmovq 32(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:364
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_equalNullComparison__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:365

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:367
    "\tcmpq $2, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:368
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:376
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:377
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_neq_null)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:355
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:356
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:357
    "\ttestb $1, 9(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:358
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__masqueradesAsUndefined) "\n"
    "\txorq %rax, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:359
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:360

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__masqueradesAsUndefined)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:362
    "\tmovq 32(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:363
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:364
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_8_equalNullComparison__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:365

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__immediate)
    "\tandq $-9, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:367
    "\tcmpq $2, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:368
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_8_equalNullComparison__done)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\txorq $7, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:385
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:386
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_stricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__9_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__9_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__10_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__10_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:396
    "\torq %rdx, %rcx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:397
    "\ttestq %r15, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:399
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:400
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:402
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:403
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:418
    "\tsete %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:407
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_stricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_nstricteq)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__11_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__11_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_strictEq__12_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_strictEq__12_loadConstantOrVariable__done)
    "\tmovq %rax, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:396
    "\torq %rdx, %rcx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:397
    "\ttestq %r15, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:398
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:399
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__leftOK) "\n"
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:400
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__leftOK)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:402
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__rightOK) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:403
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_12_strictEq__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__rightOK)
    "\tcmpq %rdx, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:424
    "\tsetne %al\n"
    "\tmovzbl %al, %eax\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:407
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:408
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_strictEq__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_nstricteq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_pre_inc)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:431
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:432
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\taddl $1, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:445
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:434
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:435
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_inc) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_pre_dec)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:431
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:432
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\tsubl $1, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:451
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_preOp__slow) "\n"
    "\torq %r14, %rdx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:434
    "\tmovq %rdx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:435
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_preOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pre_dec) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_post_inc)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:459
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:460
    "\tje " LOCAL_LABEL_STRING(_offlineasm_postOp__done) "\n"
    "\tcmpq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:461
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_postOp__slow) "\n"
    "\tmovq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:462
    "\taddl $1, %ebx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:477
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_postOp__slow) "\n"
    "\torq %r14, %rbx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:464
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:465
    "\tmovq %rbx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:466

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_postOp__done)
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_postOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_post_inc) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_post_dec)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:459
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:460
    "\tje " LOCAL_LABEL_STRING(_offlineasm_12_postOp__done) "\n"
    "\tcmpq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:461
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_12_postOp__slow) "\n"
    "\tmovq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:462
    "\tsubl $1, %ebx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:483
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_12_postOp__slow) "\n"
    "\torq %r14, %rbx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:464
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:465
    "\tmovq %rbx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:466

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_postOp__done)
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_12_postOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_post_dec) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_to_jsnumber)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_13_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_13_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:492
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opToJsnumberIsImmediate) "\n"
    "\ttestq %r14, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:493
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opToJsnumberSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToJsnumberIsImmediate)
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:495
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToJsnumberSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_jsnumber) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_negate)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_14_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_14_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:508
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opNegateNotInt) "\n"
    "\ttestl $2147483647, %ecx\n"                            // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:509
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tnegl %ecx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:510
    "\torq %r14, %rcx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:511
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:512
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateNotInt)
    "\ttestq %r14, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:515
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNegateSlow) "\n"
    "\tmovq $9223372036854775808, %r11\n"                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\txorq %r11, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:516
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:517
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNegateSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_negate) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_add)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__15_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__16_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:587
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:578
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:579
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:549
    "\taddsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:588
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:553
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:562
    "\taddsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:588
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_add) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mul)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__17_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__18_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:597
    "\timull %edx, %ebx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:598
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\ttestl %ebx, %ebx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:599
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done) "\n"
    "\tcmpl $0, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:600
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpl $0, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:601
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__done)
    "\torq %r14, %rbx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:603
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:604
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:549
    "\tmulsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:553
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_18_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:562
    "\tmulsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:606
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_18_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mul) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_sub)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__19_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__binaryOpCustomStore__20_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tsubl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:613
    "\tjo " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:578
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:579
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:549
    "\tsubsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:553
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_binaryOp__20_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:562
    "\tsubsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:614
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOp__20_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_sub) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_div)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__21_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__22_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:530
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:531
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op2NotInt) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestl %edx, %edx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:623
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpl $-1, %edx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:624
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1) "\n"
    "\tcmpl $-2147483648, %eax\n"                            // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:625
    "\tje " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__notNeg2TwoThe31DivByNeg1)
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:627
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK) "\n"
    "\tcmpl $0, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:628
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_binaryOpCustomStore__integerOperationAndStore__intOK)
    "\tmovq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:630
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:631
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:632
    "\tcdq\n"
    "\tidivl %ebx\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:633
    "\ttestl %edx, %edx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:634
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:635
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:636
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:538
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:539
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int) "\n"
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:540
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:541
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:542
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:543

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntOp2Int)
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:545

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op1NotIntReady)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:548
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:549
    "\tdivsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:638
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:551
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:552
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:553
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__op2NotInt)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:559
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_22_binaryOpCustomStore__slow) "\n"
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:560
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:561
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:562
    "\tdivsd %xmm1, %xmm0\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:638
    "\tmovd %xmm0, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:564
    "\tsubq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:565
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:566
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_22_binaryOpCustomStore__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_div) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_lshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__23_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__23_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__24_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__24_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:663
    "\tsall %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_rshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__25_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__25_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__26_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__26_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_26_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:671
    "\tsarl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_26_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_rshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_urshift)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__27_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__27_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__28_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__28_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\txchgq %rdx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:680
    "\tshrl %cl, %eax\n"
    "\txchgq %rdx, %rcx\n"
    "\tcmpl $0, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:681
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_28_bitOp__slow) "\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_28_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_urshift) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitand)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__29_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__29_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__30_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__30_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_30_bitOp__slow) "\n"
    "\tandl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:690
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_30_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitand) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitxor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__31_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__31_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__32_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__32_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_32_bitOp__slow) "\n"
    "\txorl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:698
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_32_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitxor) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_bitor)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__33_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__33_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_bitOp__34_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_bitOp__34_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:648
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:649
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_34_bitOp__slow) "\n"
    "\torl %edx, %eax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:706
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:651
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:652
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_34_bitOp__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_bitor) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_check_has_instance)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__35_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:715
    "\ttestb $8, 9(%rax)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:716
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opCheckHasInstanceSlow) "\n"
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opCheckHasInstanceSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_check_has_instance) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_instanceof)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__36_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:730
    "\tcmpb $17, 8(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:731
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rax, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__37_loadConstantOrVariable__done)
    "\ttestq %r15, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofSlow) "\n"
    "\tmovq $1, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:736

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofLoop)
    "\tmovq 0(%rcx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:738
    "\tmovq 24(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:739
    "\tcmpq %rdx, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:740
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opInstanceofDone) "\n"
    "\ttestq %r15, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:741
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opInstanceofLoop) "\n"
    "\txorq %rax, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:743

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofDone)
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:745
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:746
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInstanceofSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_instanceof) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_undefined)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_38_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_38_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:759
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opIsUndefinedCell) "\n"
    "\tcmpq $10, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:760
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:761
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:762
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsUndefinedCell)
    "\tmovq 0(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:765
    "\ttestb $1, 9(%rax)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:766
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_masqueradesAsUndefined) "\n"
    "\tmovq $6, %rdx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:767
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:768
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_masqueradesAsUndefined)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:771
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:772
    "\tcmpq %rdx, 16(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:773
    "\tsete %bl\n"
    "\tmovzbl %bl, %ebx\n"
    "\torq $6, %rbx\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:774
    "\tmovq %rbx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:775
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_boolean)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_39_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_39_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:784
    "\ttestq $-2, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:785
    "\tsetz %al\n"
    "\tmovzbl %al, %eax\n"
    "\torq $6, %rax\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:786
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:787
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_number)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_40_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_40_loadConstantOrVariable__done)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:796
    "\tsetnz %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:797
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:798
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_string)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_41_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_41_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:807
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opIsStringNotCell) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:808
    "\tcmpb $5, 8(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:809
    "\tsete %dl\n"
    "\tmovzbl %dl, %edx\n"
    "\torq $6, %rdx\n"                                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:810
    "\tmovq %rdx, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:811
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opIsStringNotCell)
    "\tmovq $6, 0(%r13, %rcx, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:814
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const)
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_42_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_42_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:843
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const_check)
    "\tmovq 24(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%r10, %rsi, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpb $0, 0(%rcx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:852
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opInitGlobalConstCheckSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_43_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_43_loadConstantOrVariable__done)
    "\tmovq %rcx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:855
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opInitGlobalConstCheckSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_init_global_const_check) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__44_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:876
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rbx, %rcx, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:878
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:879
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_out_of_line)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getById__loadConstantOrVariableCell__45_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_45_getById__opGetByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rbx), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:965
    "\tcmpq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:876
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_45_getById__opGetByIdSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax, %rcx, 1), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:878
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:879
    "\tmovq 64(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_45_getById__opGetByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_array_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__46_loadConstantOrVariable__done)
    "\ttestq %r15, %rbx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:903
    "\tmovq %rcx, 8(%rdx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:243
    "\tmovzbl 11(%rcx), %ecx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:245
    "\ttestl $1, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:905
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\ttestl $30, %ecx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:906
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 64(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:909
    "\tmovl -8(%rax), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:910
    "\tcmpl $0, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:911
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetArrayLengthSlow) "\n"
    "\torq %r14, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:912
    "\tmovq %rax, 24(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:914
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArrayLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_arguments_length)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:926
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentsLengthSlow) "\n"
    "\tmovl -48(%r13), %ecx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:927
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:928
    "\torq %r14, %rcx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:929
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:930
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentsLengthSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_arguments_length) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__47_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:948
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__48_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rax, %rdx, 1)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:952
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByIdSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__loadConstantOrVariableCell__49_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:965
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:948
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putById__getPropertyStorage__continuation__50_loadConstantOrVariable__done)
    "\tmovq %rax, 0(%rbx, %rdx, 1)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:952
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__51_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tleaq (%rdx, %rax), %rbx\n"                            // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__52_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:987
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_direct_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__53_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:965
    "\taddq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__54_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:987
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__55_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:999
    "\tcmpq $2, 24(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1001
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__loop)
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1003
    "\tmovq 0(%rdx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1004
    "\tcmpq 0(%rbx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1005
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1006
    "\tcmpq $2, 24(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1007
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tleaq (%rdx, %rax), %rbx\n"                            // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__56_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:987
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition_normal_out_of_line)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rbx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__loadConstantOrVariableCell__57_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:975
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\tmovq 56(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 8(%rbx), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:999
    "\tcmpq $2, 24(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1001
    "\tje " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__57_additionalChecks__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__57_additionalChecks__loop)
    "\tmovq 24(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1003
    "\tmovq 0(%rdx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1004
    "\tcmpq 0(%rbx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1005
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByIdSlow) "\n"
    "\taddq $8, %rbx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1006
    "\tcmpq $2, 24(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1007
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__57_additionalChecks__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__57_additionalChecks__done)
    "\tmovslq 40(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 8(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:965
    "\taddq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:982
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putByIdTransition__getPropertyStorage__continuation__58_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:985
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 0(%rax)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:987
    "\taddq $9, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__59_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1031
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 8(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:243
    "\tmovzbl 11(%rcx), %ecx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:245
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__60_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq %edx, %rdx\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1036
    "\tmovq 8(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1037
    "\tandl $30, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1038
    "\tcmpl $20, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1039
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opGetByValIsContiguous) "\n"
    "\tcmpl $26, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1040
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotContiguous) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValIsContiguous)
    "\tcmpl -8(%rbx), %edx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1043
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rbx, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1045
    "\ttestq %rcx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1046
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1047

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotContiguous)
    "\tcmpl $22, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1050
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByValNotDouble) "\n"
    "\tcmpl -8(%rbx), %edx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1051
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1052
    "\tmovsd 0(%rbx, %rdx, 8), %xmm0\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1053
    "\tucomisd %xmm0, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1054
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovd %xmm0, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1055
    "\tsubq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1056
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opGetByValDone) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1057

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValNotDouble)
    "\tsubl $28, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1060
    "\tcmpl $2, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1061
    "\tja " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tcmpl -4(%rbx), %edx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1062
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%rbx, %rdx, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1064
    "\ttestq %rcx, %rcx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1065
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opGetByValSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValDone)
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1068
    "\tmovq 40(%r10, %rsi, 8), %rax\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 24(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_argument_by_val)
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1084
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rcx, %rdx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__61_loadConstantOrVariable__done)
    "\tcmpq %r14, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\taddl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1086
    "\tmovl -48(%r13), %edx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1087
    "\tcmpl %edx, %ecx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1088
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetArgumentByValSlow) "\n"
    "\tnegl %ecx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1089
    "\tmovslq %ecx, %rcx\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1090
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq -56(%r13, %rcx, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1093
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1094
    "\tmovq %rax, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetArgumentByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_argument_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_by_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_62_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_62_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_62_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_62_loadConstantOrVariable__done)
    "\tmovslq 32(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1109
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 40(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__63_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1114
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1115
    "\tcmpq 8(%rdx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1116
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tmovslq 48(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl 0(%r13, %rbx, 8), %ebx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1118
    "\tsubl $1, %ebx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1119
    "\tcmpl 24(%rdx), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1120
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameSlow) "\n"
    "\tcmpl 32(%rdx), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1121
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_opGetByPnameInlineProperty) "\n"
    "\taddl $100, %ebx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1122
    "\tsubl 32(%rdx), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1123

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameInlineProperty)
    "\tcmpl $100, %ebx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:826
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__isInline) "\n"
    "\tmovq 8(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:827
    "\tnegl %ebx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:828
    "\tmovslq %ebx, %rbx\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:829
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadPropertyAtVariableOffset__ready) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:830

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__isInline)
    "\taddq $-768, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:832

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadPropertyAtVariableOffset__ready)
    "\tmovq 784(%rax, %rbx, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:834
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1127
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opGetByPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_by_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_val)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableCell__64_loadConstantOrVariable__done)
    "\ttestq %r15, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:165
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 0(%rdx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1157
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 8(%rbx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:243
    "\tmovzbl 11(%rcx), %ecx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:245
    "\tmovslq 16(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_loadConstantOrVariableInt32__65_loadConstantOrVariable__done)
    "\tcmpq %r14, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:160
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovslq %ebx, %rbx\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1162
    "\tmovq 8(%rdx), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1163
    "\tandl $30, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1164
    "\tcmpl $20, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1165
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotInt32) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__66_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1169
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1170
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1145
    "\tmovb $1, 25(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1146
    "\tleal 1(%ebx), %ecx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1148
    "\tmovl %ecx, -8(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1149
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeResult) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1150

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotInt32)
    "\tcmpl $22, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1174
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotDouble) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__67_loadConstantOrVariable__done)
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1178
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__notInt) "\n"
    "\tcvtsi2sd %edx, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1179
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__ready) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1180

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__notInt)
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1182
    "\tmovd %rdx, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1183
    "\tucomisd %xmm0, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1184
    "\tjp " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__ready)
    "\tmovsd %xmm0, 0(%rax, %rbx, 8)\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1186
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_67_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1145
    "\tmovb $1, 25(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1146
    "\tleal 1(%ebx), %ecx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1148
    "\tmovl %ecx, -8(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1149
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_67_contiguousPutByVal__storeResult) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1150

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotDouble)
    "\tcmpl $26, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1190
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValNotContiguous) "\n"
    "\tcmpl -8(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1136
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_68_contiguousPutByVal__outOfBounds) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_contiguousPutByVal__storeResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_contiguousPutByVal__storeCallback__68_loadConstantOrVariable__done)
    "\tmovq %rdx, 0(%rax, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1195
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_68_contiguousPutByVal__outOfBounds)
    "\tcmpl -4(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1143
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tmovq 32(%r10, %rsi, 8), %rcx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1145
    "\tmovb $1, 25(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1146
    "\tleal 1(%ebx), %ecx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1148
    "\tmovl %ecx, -8(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1149
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_68_contiguousPutByVal__storeResult) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1150

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValNotContiguous)
    "\tcmpl $28, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1199
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tcmpl -4(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1200
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opPutByValSlow) "\n"
    "\tcmpq $0, 16(%rax, %rbx, 8)\n"                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1201
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageEmpty) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageStoreResult)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_69_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_loadConstantOrVariable__done)
    "\tmovq %rdx, 16(%rax, %rbx, 8)\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1206
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValArrayStorageEmpty)
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovb $1, 25(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1212
    "\taddl $1, 12(%rax)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1214
    "\tcmpl -8(%rax), %ebx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1215
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n"
    "\tleal 1(%ebx), %edx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1216
    "\tmovl %edx, -8(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1217
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opPutByValArrayStorageStoreResult) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1218

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opPutByValSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_loop)
    "\taddl 8(%r10, %rsi, 8), %esi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jmp)
    "\taddl 8(%r10, %rsi, 8), %esi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jeq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1255
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1256
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1257
    "\ttestb $1, 9(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1274
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined) "\n"
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1275
    "\tmovq 32(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1276
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1277
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__cellHandler__notMasqueradesAsUndefined)
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1265
    "\tcmpq $2, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1280
    "\tje " LOCAL_LABEL_STRING(_offlineasm_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jneq_null)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1255
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1256
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__immediate) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1257
    "\ttestb $1, 9(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1287
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1288
    "\tmovq 32(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1289
    "\tcmpq %rax, 16(%rcx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1290
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_equalNull__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_69_equalNull__immediate)
    "\tandq $-9, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1265
    "\tcmpq $2, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1292
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_69_equalNull__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jneq_ptr)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1299
    "\tmovq 32(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1300
    "\tmovq 1136(%rcx, %rdx, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1301
    "\tcmpq 0(%r13, %rax, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1302
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opJneqPtrTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opJneqPtrTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_switch_imm)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_70_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_70_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1356
    "\tmovq 3232(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1357
    "\timull $64, %ebx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1358
    "\tmovq 56(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1359
    "\taddq %rbx, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1360
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1361
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmNotInt) "\n"
    "\tsubl 24(%rcx), %edx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1362
    "\tcmpl 0(%rcx), %edx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1363
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\tmovq 8(%rcx), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1364
    "\tmovslq 0(%rbx, %rdx, 4), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1365
    "\ttestl %edx, %edx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1366
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmNotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1370
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchImmSlow) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchImmSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_imm) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_switch_char)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_71_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rcx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_71_loadConstantOrVariable__done)
    "\tmovq -8(%r13), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1384
    "\tmovq 3232(%rcx), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1385
    "\timull $64, %ebx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1386
    "\tmovq 80(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1387
    "\taddq %rbx, %rcx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1388
    "\ttestq %r15, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1389
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 0(%rdx), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1390
    "\tcmpb $5, 8(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1391
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tcmpl $1, 12(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1392
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 16(%rdx), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1393
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1394
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchOnRope) "\n"
    "\tmovq 8(%rax), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1395
    "\ttestl $64, 24(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1396
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opSwitchChar8Bit) "\n"
    "\tmovzwl 0(%rdx), %eax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1397
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1398

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchChar8Bit)
    "\tmovzbl 0(%rdx), %eax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1400

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharReady)
    "\tsubl 24(%rcx), %eax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1402
    "\tcmpl 0(%rcx), %eax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1403
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\tmovq 8(%rcx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1404
    "\tmovslq 0(%rcx, %rax, 4), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1405
    "\ttestl %edx, %edx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1406
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opSwitchCharFallThrough) "\n"
    "\taddq %rdx, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchCharFallThrough)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opSwitchOnRope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_char) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func)
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1420
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncUnchecked) "\n"
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rdx, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1422
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNewFuncDone) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncUnchecked)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNewFuncDone)
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_activation)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1469
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffActivationNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_activation) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffActivationNotCreated)
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_tear_off_arguments)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tsubl $1, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1478
    "\tcmpq $0, 0(%r13, %rax, 8)\n"                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1479
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opTearOffArgumentsNotCreated) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_tear_off_arguments) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opTearOffArgumentsNotCreated)
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_ret)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\taddl $10, 3112(%rax)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:251
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_72_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_72_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:410
    "\tmovq -40(%r13), %r13\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:413

OFFLINE_ASM_OPCODE_LABEL(op_call_put_result)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 16(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1496
    "\tmovq %rax, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_ret_object_or_this)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\taddl $10, 3112(%rax)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:251
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__72_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__72_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_73_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_73_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1507
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1508
    "\tcmpb $17, 8(%rcx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1509
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_opRetObjectOrThisNotObject) "\n"
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:410
    "\tmovq -40(%r13), %r13\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:413

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opRetObjectOrThisNotObject)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_74_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_74_loadConstantOrVariable__done)
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:410
    "\tmovq -40(%r13), %r13\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:413

OFFLINE_ASM_OPCODE_LABEL(op_to_primitive)
    "\tmovslq 16(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_75_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_75_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_75_loadConstantOrVariable__done)
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1523
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveIsImm) "\n"
    "\tmovq 0(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1524
    "\tcmpb $5, 8(%rcx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1525
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opToPrimitiveSlowCase) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveIsImm)
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1527
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opToPrimitiveSlowCase)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_to_primitive) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_next_pname)
    "\tmovslq 24(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 32(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl 0(%r13, %rdx, 8), %eax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1541
    "\tcmpl 0(%r13, %rcx, 8), %eax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1542
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameEnd) "\n"
    "\tmovslq 40(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rcx, 8), %rcx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1545
    "\tmovq 40(%rcx), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1546
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1547
    "\taddl $1, %eax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1548
    "\tmovl %eax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1549
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1551
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rbx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1554
    "\tmovq 0(%rbx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1555
    "\tcmpq 8(%rcx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1556
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 16(%rcx), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1557
    "\tmovq 8(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1558
    "\tcmpq $0, 0(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1559
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameTarget) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameCheckPrototypeLoop)
    "\tcmpq $2, 24(%rdx)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1561
    "\tje " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\tmovq 24(%rdx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1562
    "\tmovq 0(%rcx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1563
    "\tcmpq 0(%rax), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1564
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_opNextPnameSlow) "\n"
    "\taddq $8, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1565
    "\tcmpq $0, 0(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1566
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_opNextPnameCheckPrototypeLoop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameTarget)
    "\taddl 48(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameEnd)
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_opNextPnameSlow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_next_pname) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_catch)
    "\tmovq %rax, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1585
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1586
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1587
    "\tmovq 112(%rsp), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1588
    "\tmovq 20200(%rbx), %rsi\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1589
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1590
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1591
    "\tmovq 20144(%rbx), %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1592
    "\tmovq $0, 20144(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1593
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rax, 0(%r13, %rcx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1595
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_end)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\taddl $10, 3112(%rax)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:251
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForEpilogue__75_checkSwitchToJIT__continue) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_replace) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForEpilogue__75_checkSwitchToJIT__continue)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rax, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1605
    "\tmovq -16(%r13), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:410
    "\tmovq -40(%r13), %r13\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:411
    "\tpush %rcx\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:204
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:413

OFFLINE_ASM_GLUE_LABEL(llint_throw_from_slow_path_trampoline)
    "\tmovq 112(%rsp), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1613
    "\tmovq 20184(%rdx), %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1614
    "\tjmp *20192(%rdx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1615

OFFLINE_ASM_GLUE_LABEL(llint_throw_during_call_trampoline)
    "\tpop %rcx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovq 112(%rsp), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1620
    "\tmovq 20184(%rdx), %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1621
    "\tjmp *20192(%rdx)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1622

OFFLINE_ASM_OPCODE_LABEL(op_new_array)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_array_with_size)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_with_size) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_array_buffer)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_array_buffer) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_new_regexp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_regexp) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_less)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_less) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_lesseq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_lesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_greater)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_greatereq)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_greatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_mod)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_mod) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_typeof)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_typeof) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_object)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_object) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_is_function)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_is_function) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_in)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_in) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_to_base_variable)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $32, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:544
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:545
    "\tmovq 3184(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:546
    "\tmovslq 24(%rdx, %rax, 1), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:577
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:562
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:563
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_putToBaseVariableBody__76_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_putToBaseVariableBody__76_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putToBaseVariableBody__76_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_putToBaseVariableBody__76_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rdx, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:551
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_to_base)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $32, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:544
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:545
    "\tmovq 3184(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:546
    "\tleaq 0(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:585
    "\tcmpb $6, 0(%rax)\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:586
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__notPutToBaseVariable) "\n"
    "\tmovslq 24(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:587
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:562
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:563
    "\tmovslq 24(%r10, %rsi, 8), %rcx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__77_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__77_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__77_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rcx, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__putToBaseVariableBody__77_loadConstantOrVariable__done)
    "\tmovq %rbx, 0(%rdx, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:551
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getPutToBaseOperationField__fieldGetter__notPutToBaseVariable)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_to_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_global_property)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:664
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:665
    "\tmovq 8(%rax), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:666
    "\tcmpq %rcx, 0(%rdx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:667
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_llint_op_resolve_local) "\n"
    "\tmovslq 16(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:668
    "\tnegq %rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:820
    "\tmovq 8(%rdx), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:821
    "\tmovq 784(%rdx, %rax, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:822
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rcx, 0(%r13, %rax, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:649
    "\tmovq 32(%r10, %rsi, 8), %rax\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rcx, 24(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_global_var)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovq 16(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:683
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:634
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:635
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:691
    "\tmovl 16(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:694
    "\tmovslq 40(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:697
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var_on_top_scope)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:716
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:717
    "\tmovslq 40(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:720
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_scoped_var_with_top_scope_check)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovslq 16(%rax), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:729
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:731
    "\ttestq %rdx, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:734
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:735
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getScope__loadInitialScope__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:736

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:738

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_77_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_77_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_77_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_77_getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:743
    "\tmovslq 64(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:746
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_llint_op_resolve_local)
    "\tmovslq 24(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:755
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_noInstructions) "\n"
    "\tmovslq 0(%rax), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:756
    "\tcmpl $9, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:757
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_notSkipScopes) "\n"
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:691
    "\tmovl 16(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__78_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__78_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_resolveScopedVarBody__78_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_resolveScopedVarBody__78_getScope__done)
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:694
    "\tmovslq 40(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:697
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rdx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 32(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_notSkipScopes)
    "\tcmpl $6, %edx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:761
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_notGetAndReturnGlobalVar) "\n"
    "\tmovq 16(%rax), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:762
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 0(%rax), %rbx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:634
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:635
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rbx, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_notGetAndReturnGlobalVar)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_noInstructions)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_global)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:774
    "\tmovq 32(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:775
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:649
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_global_dynamic)
    "\tjmp " LOCAL_REFERENCE(llint_op_resolve_base) "\n"     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:786

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_scope)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:793
    "\tmovl 16(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_79_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_79_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_79_getScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:649
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base_to_scope_with_top_scope_check)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\tmovslq 16(%rax), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:809
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:811
    "\ttestq %rdx, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:814
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_getScope__79_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:815
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_getScope__79_loadInitialScope__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:816

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__79_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:818

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_getScope__79_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_80_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_80_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_80_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_80_getScope__done)
    "\tmovslq 8(%r10, %rsi, 8), %rbx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq %rdx, 0(%r13, %rbx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:649
    "\tmovq 48(%r10, %rsi, 8), %rbx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rdx, 24(%rbx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_base)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_ensure_property_exists)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_ensure_property_exists) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_with_base)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:846
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tmovq -24(%r13), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:848
    "\tmovslq 0(%rax), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:850
    "\tcmpl $9, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:852
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSkipScopes) "\n"
    "\tmovq %rbx, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:853
    "\tmovl 16(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__81_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__81_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__81_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__81_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:855
    "\taddq $24, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:856
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveCorrectScope) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:857

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSkipScopes)
    "\tcmpl $8, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:861
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSkipTopScopeNode) "\n"
    "\tmovslq 16(%rax), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:862
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:863
    "\ttestq %rdx, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:866
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__81_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:867
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__81_loadInitialScope__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:868

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__81_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:870

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__81_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__82_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__82_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__82_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__82_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:874
    "\taddq $48, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:876

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSkipTopScopeNode)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__haveCorrectScope)
    "\tmovslq 0(%rax), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:885
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $3, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:891
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSetBaseToScope) "\n"
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:893
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveSetBase) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:898

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSetBaseToScope)
    "\tcmpl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:902
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notSetBaseToUndefined) "\n"
    "\tmovq $10, 0(%r13, %rdx, 8)\n"                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:904
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__haveSetBase) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:909

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notSetBaseToUndefined)
    "\tcmpl $4, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:912
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:913
    "\tmovq 16(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:914
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:916

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__haveSetBase)
    "\tmovslq 24(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:927
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $5, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:932
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__notGetAndReturnScopedVar) "\n"
    "\tmovq 32(%rbx), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:933
    "\tmovslq 40(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:936
    "\tmovq 0(%rbx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 48(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__notGetAndReturnScopedVar)
    "\tcmpl $11, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:941
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__slowPath) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__slowPath)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_base) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $7, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_resolve_with_this)
    "\tmovslq 32(%r10, %rsi, 8), %rax\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\timulq $24, %rax, %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:597
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:598
    "\tmovq 3160(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:599
    "\tmovq 8(%rdx, %rax, 1), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:600
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:846
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__slowPath) "\n"
    "\tmovq -24(%r13), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:848
    "\tmovslq 0(%rax), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:850
    "\tcmpl $9, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:852
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__notSkipScopes) "\n"
    "\tmovq %rbx, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:853
    "\tmovl 16(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__83_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__83_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__83_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__83_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:855
    "\taddq $24, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:856
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__haveCorrectScope) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:857

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__notSkipScopes)
    "\tcmpl $8, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:861
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__notSkipTopScopeNode) "\n"
    "\tmovslq 16(%rax), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:862
    "\tmovq 0(%r13, %rdx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:863
    "\ttestq %rdx, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:866
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__83_loadInitialScope__scopeChainNotCreated) "\n"
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:867
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__getScope__83_loadInitialScope__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:868

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__83_loadInitialScope__scopeChainNotCreated)
    "\tmovq -24(%r13), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:870

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__getScope__83_loadInitialScope__done)
    "\tmovl 40(%rax), %ecx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:605
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:607
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__84_getScope__done) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__84_getScope__loop)
    "\tmovq 16(%rdx), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:609
    "\tsubl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:610
    "\ttestl %ecx, %ecx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:611
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_interpretResolveWithBase__84_getScope__loop) "\n"

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_interpretResolveWithBase__84_getScope__done)
    "\tmovq %rdx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:874
    "\taddq $48, %rax\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:876

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__notSkipTopScopeNode)

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__haveCorrectScope)
    "\tmovslq 0(%rax), %rcx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:885
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $3, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:891
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__notSetBaseToScope) "\n"
    "\tmovq %rbx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:893
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__haveSetBase) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:898

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__notSetBaseToScope)
    "\tcmpl $1, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:902
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__notSetBaseToUndefined) "\n"
    "\tmovq $10, 0(%r13, %rdx, 8)\n"                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:904
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__haveSetBase) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:909

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__notSetBaseToUndefined)
    "\tcmpl $4, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:912
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__slowPath) "\n"
    "\tmovq 0(%rbx), %rcx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:913
    "\tmovq 16(%rcx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:914
    "\tmovq %rcx, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:916

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__haveSetBase)
    "\tmovslq 24(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:927
    "\tmovslq 16(%r10, %rsi, 8), %rdx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpl $5, %ecx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:932
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__notGetAndReturnScopedVar) "\n"
    "\tmovq 32(%rbx), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:933
    "\tmovslq 40(%rax), %rcx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:936
    "\tmovq 0(%rbx, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:618
    "\tmovq %rax, 0(%r13, %rdx, 8)\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:619
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 24(%rdx)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:174
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__notGetAndReturnScopedVar)
    "\tcmpl $11, %ecx\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:941
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_84_interpretResolveWithBase__slowPath) "\n"
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_84_interpretResolveWithBase__slowPath)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_resolve_with_this) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $6, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_del_by_id)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_id) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_del_by_val)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_del_by_val) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_by_index)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_by_index) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_put_getter_setter)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_put_getter_setter) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_jmp_scopes)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jmp_scopes) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_true)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__84_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__84_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__84_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__84_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1238
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1006
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jtrue) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jtrue)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__85_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1238
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_85_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1013
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_85_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_85_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jtrue) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_false)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__86_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1238
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_86_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1020
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_86_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_86_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jfalse) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jfalse)
    "\tmovslq 8(%r10, %rsi, 8), %rdx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__87_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_jumpTrueOrFalse__87_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__87_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rdx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rdx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_jumpTrueOrFalse__87_loadConstantOrVariable__done)
    "\txorq $6, %rax\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1238
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1239
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_87_jumpTrueOrFalse__slow) "\n"
    "\ttestl %eax, %eax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1027
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_87_jumpTrueOrFalse__target) "\n"
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_jumpTrueOrFalse__target)
    "\taddl 16(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_87_jumpTrueOrFalse__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jfalse) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_less)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__88_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__88_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__89_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__89_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1034
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1035
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1035
    "\tja " LOCAL_LABEL_STRING(_offlineasm_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jless) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__90_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__90_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__91_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__91_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1042
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_91_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1043
    "\tja " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_91_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1043
    "\tja " LOCAL_LABEL_STRING(_offlineasm_91_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_91_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jless) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnless)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__92_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__92_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__93_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__93_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_93_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_93_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1050
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_93_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_93_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_93_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_93_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_93_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1051
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_93_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_93_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1051
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_93_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_93_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnless) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_greater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__94_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__94_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__95_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__95_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_95_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_95_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1058
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_95_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_95_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_95_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_95_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_95_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1059
    "\tja " LOCAL_LABEL_STRING(_offlineasm_95_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_95_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1059
    "\tja " LOCAL_LABEL_STRING(_offlineasm_95_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_95_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__96_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__96_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__97_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__97_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_97_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_97_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1066
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_97_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_97_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_97_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_97_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_97_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1067
    "\tja " LOCAL_LABEL_STRING(_offlineasm_97_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_97_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1067
    "\tja " LOCAL_LABEL_STRING(_offlineasm_97_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_97_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreater)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__98_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__98_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__99_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__99_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__99_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__99_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_99_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_99_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1074
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_99_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_99_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_99_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_99_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_99_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1075
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_99_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_99_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1075
    "\tjbe " LOCAL_LABEL_STRING(_offlineasm_99_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_99_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreater) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_lesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__100_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__100_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__100_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__100_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__101_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__101_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__101_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__101_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_101_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_101_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1082
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_101_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_101_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_101_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_101_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_101_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1083
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_101_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_101_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1083
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_101_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_101_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__102_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__102_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__102_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__102_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__103_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__103_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__103_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__103_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_103_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_103_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1090
    "\tjle " LOCAL_LABEL_STRING(_offlineasm_103_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_103_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_103_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_103_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_103_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1091
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_103_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_103_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1091
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_103_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_103_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jnlesseq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__104_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__104_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__104_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__104_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__105_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__105_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__105_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__105_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_105_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_105_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1098
    "\tjg " LOCAL_LABEL_STRING(_offlineasm_105_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_105_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_105_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_105_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_105_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1099
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_105_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_105_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm0, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1099
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_105_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_105_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jnlesseq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_if_greatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__106_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__106_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__106_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__106_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__107_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__107_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__107_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__107_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_107_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_107_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1106
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_107_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_107_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_107_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_107_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_107_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1107
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_107_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_107_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1107
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_107_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_107_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jgreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__108_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__108_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__108_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__108_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__109_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__109_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__109_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__109_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_109_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_109_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1114
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_109_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_109_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_109_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_109_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_109_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1115
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_109_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_109_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1115
    "\tjae " LOCAL_LABEL_STRING(_offlineasm_109_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_109_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jgreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_jngreatereq)
    "\tmovslq 8(%r10, %rsi, 8), %rcx\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovslq 16(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tcmpq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__110_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__110_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__110_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rax), %rax\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rcx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rax, %rcx, 8), %rax\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__110_loadConstantOrVariable__done)
    "\tcmpq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_compare__111_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_compare__111_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__111_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rdx), %rdx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rbx\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rdx, %rbx, 8), %rdx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_compare__111_loadConstantOrVariable__done)
    "\tcmpq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1314
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_111_compare__op1NotInt) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1315
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_111_compare__op2NotInt) "\n"
    "\tcmpl %edx, %eax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1122
    "\tjl " LOCAL_LABEL_STRING(_offlineasm_111_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__op1NotInt)
    "\ttestq %r14, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1320
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_111_compare__slow) "\n"
    "\tcmpq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1321
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_111_compare__op1NotIntOp2NotInt) "\n"
    "\tcvtsi2sd %edx, %xmm1\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1322
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_111_compare__op1NotIntReady) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1323

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__op1NotIntOp2NotInt)
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1325
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_111_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1326
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1327

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__op1NotIntReady)
    "\taddq %r14, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1329
    "\tmovd %rax, %xmm0\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1330
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1123
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_111_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__op2NotInt)
    "\tcvtsi2sd %eax, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1335
    "\ttestq %r14, %rdx\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1336
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_111_compare__slow) "\n"
    "\taddq %r14, %rdx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1337
    "\tmovd %rdx, %xmm1\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1338
    "\tucomisd %xmm1, %xmm0\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1123
    "\tjb " LOCAL_LABEL_STRING(_offlineasm_111_compare__jumpTarget) "\n"
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__jumpTarget)
    "\taddl 24(%r10, %rsi, 8), %esi\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:46
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_111_compare__slow)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_jngreatereq) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_loop_hint)
    "\tmovq -8(%r13), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:250
    "\taddl $1, 3112(%rax)\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:251
    "\tjs " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__111_checkSwitchToJIT__continue) "\n"
    "\tmovl %esi, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:133
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_loop_osr) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:136
    "\ttestq %rax, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:137
    "\tjz " LOCAL_LABEL_STRING(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover) "\n"
    "\tjmp *%rax\n"                                          // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:138

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__checkSwitchToJIT__action__recover)
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:140
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:141

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_checkSwitchToJITForLoop__111_checkSwitchToJIT__continue)
    "\taddq $1, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_switch_string)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_switch_string) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_new_func_exp)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_new_func_exp) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call)
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq -56(%r13, %rbx, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1432
    "\ttestq %r15, %rax\n"                                   // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1433
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_arrayProfileForCall__done) "\n"
    "\tmovq 0(%rax), %rax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1434
    "\tmovq 40(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq %rax, 8(%rdx)\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1436

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_arrayProfileForCall__done)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 16(%rdx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1444
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__112_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__112_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__112_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__112_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1446
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl $6, %esi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1448
    "\tsall $3, %ebx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1449
    "\taddq %r13, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1450
    "\tmovq 32(%rcx), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1451
    "\tmovq %rcx, -32(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1452
    "\tmovq %rax, -24(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1453
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl %esi, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1455
    "\tmovq %r13, -40(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1456
    "\tmovl %ecx, -48(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1457
    "\tmovq %rbx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1458
    "\tcall *32(%rdx)\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:220
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:233
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_construct)
    "\tmovslq 8(%r10, %rsi, 8), %rax\n"                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovq 32(%r10, %rsi, 8), %rdx\n"                       // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:63
    "\tmovq 16(%rdx), %rcx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1444
    "\tcmpq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:147
    "\tjge " LOCAL_LABEL_STRING(_offlineasm_doCall__113_loadConstantOrVariable__constant) "\n"
    "\tmovq 0(%r13, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:148
    "\tjmp " LOCAL_LABEL_STRING(_offlineasm_doCall__113_loadConstantOrVariable__done) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:149

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__113_loadConstantOrVariable__constant)
    "\tmovq -8(%r13), %rbx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:151
    "\tmovq 3040(%rbx), %rbx\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:152
    "\tsubq $1073741824, %rax\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:153
    "\tmovq 0(%rbx, %rax, 8), %rbx\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:154

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_doCall__113_loadConstantOrVariable__done)
    "\tcmpq %rcx, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1446
    "\tjne " LOCAL_LABEL_STRING(_offlineasm_113_doCall__opCallSlow) "\n"
    "\tmovslq 24(%r10, %rsi, 8), %rbx\n"                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\taddl $6, %esi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1448
    "\tsall $3, %ebx\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1449
    "\taddq %r13, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1450
    "\tmovq 32(%rcx), %rax\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1451
    "\tmovq %rcx, -32(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1452
    "\tmovq %rax, -24(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1453
    "\tmovslq -32(%r10, %rsi, 8), %rcx\n"                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:59
    "\tmovl %esi, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1455
    "\tmovq %r13, -40(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1456
    "\tmovl %ecx, -48(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1457
    "\tmovq %rbx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1458
    "\tcall *32(%rdx)\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:220
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_113_doCall__opCallSlow)
    "\tleal 6(%esi), %eax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_construct) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:233
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call_varargs)
    "\tleal 6(%esi), %eax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_varargs) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:233
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_call_eval)
    "\tleal 4(%esi), %eax\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:121
    "\tmovl %eax, -44(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:122
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_call_eval) "\n"
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:125
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:233
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_generic_return_point)
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:55
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:56
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:57
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_strcat)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_strcat) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_get_pnames)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_get_pnames) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37
    "\tjmp *0(%r10, %rsi, 8)\n"

OFFLINE_ASM_OPCODE_LABEL(op_push_with_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_with_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_pop_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_pop_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $1, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_push_name_scope)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_push_name_scope) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $4, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_throw)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_throw_static_error)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_throw_static_error) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_profile_will_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_will_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_profile_did_call)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_profile_did_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $2, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_OPCODE_LABEL(op_debug)
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_slow_path_debug) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_native_call_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tmovq 120(%rsp), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1628
    "\tmovq %r13, 13680(%rax)\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1629
    "\tmovq -40(%r13), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1630
    "\tmovq -24(%rax), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tmovq %rdx, -24(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1632
    "\tmovq 0(%rsp), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1633
    "\tmovq %rdx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1635
    "\tsubq $8, %rsp\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636
    "\tmovq -32(%r13), %rsi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1637
    "\tmovq 24(%rsi), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1638
    "\tmovq %rax, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1639
    "\tcall *96(%rdx)\n"                                     // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1640
    "\taddq $8, %rsp\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1641
    "\tmovq 120(%rsp), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1642
    "\tcmpq $0, 20144(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1671
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1672
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1673
    "\tmovq 112(%rsp), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq %r13, 13680(%rax)\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677

OFFLINE_ASM_GLUE_LABEL(llint_native_construct_trampoline)
    "\tmovq $0, -8(%r13)\n"                                  // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1626
    "\tmovq 120(%rsp), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1628
    "\tmovq %r13, 13680(%rax)\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1629
    "\tmovq -40(%r13), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1630
    "\tmovq -24(%rax), %rdx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1631
    "\tmovq %rdx, -24(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1632
    "\tmovq 0(%rsp), %rdx\n"                                 // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1633
    "\tmovq %rdx, -16(%r13)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1634
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1635
    "\tsubq $8, %rsp\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1636
    "\tmovq -32(%r13), %rsi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1637
    "\tmovq 24(%rsi), %rdx\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1638
    "\tmovq %rax, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1639
    "\tcall *104(%rdx)\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1640
    "\taddq $8, %rsp\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1641
    "\tmovq 120(%rsp), %rbx\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1642
    "\tcmpq $0, 20144(%rbx)\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1667
    "\tjnz " LOCAL_LABEL_STRING(_offlineasm_113_nativeCallTrampoline__exception) "\n"
    "\tret\n"                                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1668

  OFFLINE_ASM_LOCAL_LABEL(_offlineasm_113_nativeCallTrampoline__exception)
    "\tpop %rdx\n"                                           // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:191
    "\tmovl -44(%r13), %esi\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1671
    "\tmovq -8(%r13), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1672
    "\tmovq 96(%r10), %r10\n"                                // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1673
    "\tmovq 112(%rsp), %rax\n"                               // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1674
    "\tmovq %r13, 13680(%rax)\n"                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1675
    "\tleaq 0(%r10, %rsi, 8), %rsi\n"                        // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:89
    "\tmovq %r10, %rbx\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:90
    "\tmovq %r13, %rdi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:63
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:64
    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:65
    "\tcall " LOCAL_REFERENCE(llint_throw_from_native_call) "\n"
    "\tmovq %rax, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:94
    "\tmovq %rdx, %r13\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:95
    "\tmovq %rbx, %r10\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:96
    "\tsubq %r10, %rsi\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:97
    "\tsarq $3, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:98
    "\tjmp " LOCAL_REFERENCE(llint_throw_from_slow_path_trampoline) "\n" // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:1677

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_chain)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_chain)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_proto)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_custom_self)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_generic)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_chain)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_proto)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_getter_self)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_proto)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_by_id_self)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_get_string_length)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_generic)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_replace)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_put_by_id_transition)
    "\tint $3\n"                                             // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:1286

OFFLINE_ASM_OPCODE_LABEL(op_init_global_const_nop)
    "\taddq $5, %rsi\n"                                      // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:41
    "\tjmp *0(%r10, %rsi, 8)\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter64.asm:37

OFFLINE_ASM_GLUE_LABEL(llint_end)
    "\tmovl %eax, 3148725999\n"                              // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:170
    "\txorq %rax, %rax\n"                                    // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:171
    "\tcall *%rax\n"                                         // /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/llint/LowLevelInterpreter.asm:172
OFFLINE_ASM_END
#endif
