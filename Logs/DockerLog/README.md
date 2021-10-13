# Docker日志

## 开坑
```zsh
# 启动ubuntu镜像
docker -itd -p 1995:22 --name myubuntu ubuntu
# -i 是允许容器进行交互
# -t 是为容器分配一个伪终端
# -d 允许容器后台运行
# --name myubuntu 指定容器名字
# ubuntu 是镜像的名字
```

```zsh
docker container exec -it myubuntu /bin/bash
# exec 是执行容器中某个指令
# /bin/bash 是执行容器中的bash终端
```

```zsh
# 不解释
docker container start myubuntu
docker container stop myubuntu
```

```zsh
# 删除容器
docker rm myubuntu
# 删除镜像
docker rmi ubuntu
```

```zsh
# 查看当前所有容器状态
docker ps -a 
```

```zsh
# 下载镜像
docker pull ubuntu
```

```zsh
# 登入docker
docker login
```

```zsh
# 将容器提交成镜像
docker commit -m "描述" -a "作者" 容器名 镜像名
# 镜像名规范
注册名/镜像名
# 例如
imgili/myubuntu
docker commit -m "描述" -a "作者" myubuntu imgili/myubuntu
# 不用规范的镜像名，将不允许上传
push imgili/myubuntu
```
> **不用规范的镜像名，将不允许上传**