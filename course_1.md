# course_1

## 1. App、ViewController 生命周期的各个事件

###  App生命周期

#### App的运行状态

| **状态**    | **描述**                                                     |
| ----------- | ------------------------------------------------------------ |
| Not running | App没有启动，或者曾经运行过，但被系统杀死                    |
| Inactive    | App在前台运行但是此时却收不到事件。（尽管它可能在执行其他的代码。）app 通常仅仅在过渡到另一个不同状态时才会有inactive状态。 |
| Active      | App在前台运行并且接收事件。这是前台app的普通模式             |
| Background  | App在后台并且执行代码。大部分app进入到这个状态时，马上要被挂起 suspended.然而一个需要额外运行事件的app可以保持在这一状态一定的时间。另外，一个app直接在 background 状态启动时，不会进入inactive状态而是直接进入background状态。 |
| Suspended   | App在后台但是不执行代码。系统将自动的使app 进入这一状态，并且是在用户不知情的情况下。当被挂起，app保留了内存但是不执行任何代码。当低内存情况发生，系统将清除挂起的app为前台app留出足够大的内存。 |

#### App的状态切换

Not running可以转化为Inactive，Inactive可以与Active相互转换，也可以与Background相互转换，Background可与Suspended相互转换，Suspended可转化为Not running。

App在状态切换时会调用响应的app delegate方法：

- applicationDidFinishLaunching:程序装载后，展现给用户之前，这个方法允许你进行最后的初始化设置
- applicationWillResignActive:将进入非活动状态时，用这个方法让你的app进入一个静止状态
- applicationDidBecomeActive:程序进入活动状态时，使用这个方法用来做最后一分钟的准备工作
- applicationDidEnterBackground:程序进入后台，app随时会被挂起
- applicationWillEnterForeground:程序从后台重新进入前台
- applicationDidReceivememoryWarning:内存警告,程序即将终止
- applicationWillTerminate:程序退出结束

#### App的运行过程

点击图标、执行main函数、通过UIApplication函数、初始化UIApplication对象并为它设置代理对象、UIApplication监听各种事件直至程序结束

### ViewController 生命周期

alloc\init,loadview,viewDidload,viewDidAppear,willDidAppear,viewDidDisappear,dealloc

## 2.五种常用的 UI 控件

### UIScrollView

* 一个可显示超过屏幕大小的UI控件，允许滚动和缩放其包含的视图
* 可支持垂直或水平的滚动、也支持缩放

### UITableView

* 一个使用单列来展示数据的视图

* 每一行都是一个 UITableViewCell

* 只支持纵向滑动

### UIImageView

* 在一个区域内，显示图像
* 用于设置在图像视图中显示的图片

### UILabel

* 显示文字
* 是label的文字

### UIButton

* 用于形成按钮

* 用户交互的主要控件，有六种类型，其中自定义类型使用最为普遍

### 其余UI控件

UIViewController，UIView， UITextField，UICollectionView，UIWebView

## 3.三个 UITableViewDelegate 声明的方法



```objective-c
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
//	定义每个UITableView中的cell的行高
- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section;  
//	设置UITableView每个分组的Header的Title
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section;
// 设置UITableView分组Header的高
```

