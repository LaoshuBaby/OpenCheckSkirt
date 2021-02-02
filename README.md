# OpenPlaids

## 前言
你所看到的，不仅仅是格子
What you see is not just the Plaids

## TODO

1. 重构了这堆垃圾，分离成多文件
2. 提供GUI和后端分离的功能，draw也要分离成draw一个函数，然后draw去调用draw_easyx，争取早日摆脱easyx
3. 提供起名
4. 改进算法，更像一点，虽然不炼丹，但是这个寒假需要收集并维护一个小裙子素材库

## 名称由来

本项目最初定义为用于生成JK格裙图案，用于避免各种小圈子互相撕逼，天天吆喝所谓设计的图案有版权之类，浪费时间。

不如我们生成世界上所有的图案并开放，这样就不会有版权问题了。而后来又觉得，其真正的用途，在于解放劳动力，不需要人为的去刻意设定绘制的学问和刻画规则，只要训练好调整好设定好模型或者算法，就可以无人工操作的自动批量生成能过双盲的图案，能自动按照一定风格命名。

但是后来也想到，JK文化毕竟是小众文化，而国内的JK裙子，其实是我国特色的产物，并非原本的JK文化，它已经是单纯的格裙了。因此叫做OpenJK显然是不合适的。

此外，苏格兰传统格裙，也是一种格裙。甚至程序员的格子衬衫，也有非常多的花纹和特色。如果程序员可以自己生成自己喜欢的格子图案，那想必是不错的吧？~~（定制T恤厂家快来打钱这里是商机（狗头））~~

而后来发现，方格纹理，作为一种特殊的格纹，也应当收到重视。最终，这个名字希望是一个能不针对某一个小众的格纹应用场景，而是一个能覆盖尽可能多的格子自动生成库。

本处之所以选用Plaids，主要还是考虑到这里的格子，最终目标是为了让服装和纺织品印刷品能够使用，因此使用抽象含义的Grid，使用理工科专有名词的Lattice，使用过于宽泛的Check，使用主要特指方格而非各类格纹的Chequer，都是不合适的

它将主要可以应用于以下场景：JK风格裙纹理生成、格子衬衫纹理生成、抽象方格旗帜纹理生成

当然，我们无权干预别人对它的称呼，因此对它的如OpenJK、OpenCheckShirt等一系列俗称，都是允许且被接受的。

Enjoy yourself！

## 文档

直接去Docs里面按照自己的语言看着就是了

## 数据集搜集计划

我们需要的数据集具有这样的要求

1. 能够清晰的看出一个格纹的组成和特征。至少需要2*2的范围，来保证能较为清晰的看出区域划分
2. 如果是出自JK裙子之类，需要能给出至少包含习惯称呼它的名字的一个名字。如果是店家的，则以店家作为author。我们不混圈，我们只是想尽可能收集一个较为准确的dataset。比如“红色妖姬”、“金茶若梦”这样的裙子花纹的名字，请务必提交，这将是一份宝贵的数据集。
3. 如果可以，您可以尝试去搜集一款花纹的releasedate
4. **不接受手机拍照件**，可以是设计原始文件或导出的图像文件，可以是稳定的光学扫描出的图像。因为手机拍照受到拍照设备、光线色温、周围环境、表面处理工艺反光性、摄影者主观能力、神他妈美颜滤镜、等。一系列因素的影响。同时手机拍照很多人不会传原图只会传压缩过的。对于计算机视觉和未来可能使用它们做深度学习的人来说，**就是垃圾数据**。
5. 如果传的人多，我们可能会寻找社会上的力量进行激励计划，可能会考虑单独把这个仓库作为一个organization来维护，可能会考虑以专门的基金会的形式来负责日常开支。