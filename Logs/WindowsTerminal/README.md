# windows终端调教
> 最好管理员启动``powershell``
## 自动补齐
先创建``profile``
```bash
New-Item -ItemType file -Path $PROFILE  -Force
```

在终端里输入``$PROFILE``

终端会显示``Microsoft.PowerShell_profile.ps1``路径

然后修改这个文件如下：

```
# Shows navigable menu of all options when hitting Tab
Set-PSReadlineKeyHandler -Key Tab -Function MenuComplete

# Autocompletion for arrow keys
Set-PSReadlineKeyHandler -Key UpArrow -Function HistorySearchBackward
Set-PSReadlineKeyHandler -Key DownArrow -Function HistorySearchForward
```

## 美化界面

``git``别名

在终端中输入：

``Install-Module oh-my-posh -Scope CurrentUser``

``oh-my-posh``终端美化工具

``Import-Module oh-my-posh``

设置主题:
``Set-PoshPrompt -Theme Powerline``

## 处理乱码问题

需要安装字体

[firacode](https://github.com/tonsky/FiraCode)

``release``里下载好压缩包以后， 解压后，到``tff``文件夹里一个一个``.tff``文件点开安装就行。

然后再终端里设置字体