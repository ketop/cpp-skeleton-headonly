# cpp-skeleton headonly
## we already has cpp-skeleton project, why need this?
when i work from x86_64 to macos M1, i found somethings not work properly. buiding architecture changes.
i have to rebuild all static library with origin source, which is nausty. so i reconstruct this project.

## Compiler Required
- compiler must support c++11
- cmake version meet requirements

## ThirdParty
- nolhmann/json
- spdlog
- catch2 for testing

## Build App
```bash
cmake -H. -Bbuild 
cmake --build build
```

## Run App
```bash
cd bin && ./app
```

## Run Test
```bash
cd bin && ./apptest
#or
cd build && ctest -V
```

