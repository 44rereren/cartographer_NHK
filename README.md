cartographer_NHK
====

NHK学生ロボコン専用のcartographer

## 何ができるの？

2DLidarを使ったPureLocalizationができる。2DLidarを使った補正にはAMCL,Gmapping,HctorSLAM,自作などあるけれど、cartographerが精度が1番良いと思う。しかしROSとLinuxの知識が前提で作られているため、扱いがとても難しい。ロボコンの制御班は機体制御で精一杯だと思うので、誰でも簡単に扱えることを目指してcartographer_NHKを作った。

## 開発小話

cartographerを使う以前は、RC19で新潟大学が使ってたという理由でAMCLを使った補正を試したが、これがまぁ精度は悪いしチューニングも難しかった。（新潟大学はどうやってたんだろう。。。）それから京都大学がRC19で使っていたcartographerを試した。cartograoherは比較的新しい手法で、やっている人も少なかったけど京都大学がgitに公開してくれたおかげで、何とか再現したが重くてまともに動かなかった。京都大学はPCにThinkPad X1（Corei7_8世代 RAM16GB）を使ってたけど、うちはJetsonNano(1.9GHz RAM4GB)で明らかなスペック不足で、cartographerの公式ドキュメントの要求スペックがi7の3世代以上でRAM16GBで絶望的だったけど、いろいろ頑張って動かしたのがcartographer_NHK。

## 使用センサ＆PC

## 使用ROSパッケージ

## 作成者

[44rereren](https://github.com/44rereren)
