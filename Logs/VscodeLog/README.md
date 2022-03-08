# VS code

## remote -ssh
```zsh
# 这个是设置ssh
ssh root@127.0.0.1 -p 1995
```

## CMake debug 输入参数
``settings.json``
```
"cmake.debugConfig": {"args": ["103"]}
```

## CMake vcpkg集成
```bash
vcpkg integrate install
```
> ctrl + p 
> 输入 > Open Workspace setting
在``.vccode/setting.json``添加如下键值对
```bash
"cmake.configureArgs": [
  "-DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=TRUE",
  "-DCMAKE_TOOLCHAIN_FILE=D:/codes/vcpkg/scripts/buildsystems/vcpkg.cmake"
]
```

## vcpkg 安装静态库
```bash
vcpkg install wxwidgets:x64-windows-static
```