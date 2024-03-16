// emscripten compilation
// emcc add.c -Os -s WASM=1 -s SIDE_MODULE=1 -s BINARYEN_ASYNC_COMPILATION=0 -o add.wasm

/*
-Os	: Compiler optimization level. This optimization flag allows for module instantiation without requiring Emscripten's glue code.
-s WASM=1  : Tells the compiler to compile code to WebAssembly.
-s SIDE_MODULE=1 : Ensures only a WebAssembly module is output (no glue code).
-s BINARYEN_ASYNC_COMPILATION=0	
From official docs:

Whether to compile the wasm asynchronously, which is more efficient and does not block the main thread. This is currently required for all but the smallest modules to run in V8.
-o <file.wasm>	Path of output file .wasm file. We'll replace this with the desired output path when we run the command.

*/

int addTwoNumbers(int left, int right) {
    return left + right;
}