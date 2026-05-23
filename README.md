##### **Disclaimer: This is a Chinese translated version of nSkinz-advancedfx, all credits to the original creators.**

## 

## 来自原版 [namazso / nSkinz](https://github.com/namazso/nSkinz) 的用户请注意：

本 Fork 最初面向DEMO/视频制作者，支持通过 XUID 替换多名玩家的皮肤，因此您需要在 XUID 字段中填入自己的 XUID！

### 获取您的 XUID：

启动游戏后，您可以在游戏控制台中找到您的 XUID，应该会有如下类似的消息：

```
SDR RelayNetworkStatus:  avail=Attempting  config=OK  anyrelay=Attempting   (Performing ping measurement)
AuthStatus (steamid:12345678901234567):  OK  (OK)
```

其中 `12345678901234567` 即为您的 XUID。

\---

!\[Screenshot](http://i.imgur.com/KfnFQrX.jpg)

### nSkinz

nSkinz 是一款功能完整的 CS:GO 内部皮肤、刀具、手套及贴纸修改工具。  
虽然代码从零编写，但 nSkinz 深受 [chameleon-ng](https://github.com/emskye96/chameleon-ng) 的启发。

* 在任意武器上使用任意皮肤，包括正常途径无法获取的皮肤
* 为武器添加任意贴纸
* 使用任意手套模型与皮肤的组合
* 支持特殊刀具动画
* 自动替换刀具击杀播报图标
* 使用 [ImGui](https://github.com/ocornut/imgui) 实现游戏内图形化配置界面
* 皮肤数据始终保持最新，并显示本地化名称
* 采用特征码扫描与 NetVar 管理器实现动态偏移
* 支持基于 [JSON](https://github.com/nlohmann/json) 的配置保存与加载

## 编译环境要求

* 测试环境：Microsoft Visual Studio Community 2022
* [DirectX SDK](https://www.microsoft.com/en-ca/download/details.aspx?id=6812)

## 使用方法

目前仅支持 Windows，但如果您提交 PR 的话，这一情况或许会改变~~因为我比较懒~~。

* 使用以下命令克隆源代码（含子模块）：

```
git clone --recursive https://github.com/advancedfx/nSkinz.git
```

* 使用您喜欢的编译器进行编译
* 将生成的动态链接库注入游戏进程
* 按 <kbd>Insert</kbd> 键打开菜单
* 配置武器皮肤选项
* 若需覆盖多把武器，请点击"添加"按钮。当库存更新时，始终使用第一个已启用且适用于该武器的配置条目
* 点击"保存"按钮保存配置；之后点击"加载"按钮即可重新载入

## 许可证

**本项目采用 MIT 许可证**

详情请参阅 "[LICENSE](https://github.com/advancedfx/nSkinz/blob/advancedfx/LICENSE)" 文件。

