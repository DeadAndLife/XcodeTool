# XcodeTool
Xcode代码库配置

##用前须知

-----
		1.包括C实现和OC实现。
		2.C实现提供源码，OC实现较简单就不提供源码了。
		3.无论是C实现还是OC实现，您只需要运行其中一个即可。
		4.请不要修改本工具文件目录结构！！!
	
##使用步骤
	
-----
		1.将本工具clone到您的电脑(任意位置)
		2.if (您有自己的代码块) {
			将 Xcode的C配置/CodeSnippets 或 Xcode的OC配置/CodeSnippets 文件夹下的代码块替换为您自己的代码块
		}
		3.直接运行peizhi即可
###Xcode配置代码块默认存储位置		
~/Library/Developer/Xcode/UserData/CodeSnippets

###我的代码块包括

| 序号 | 快捷键 | 功能 |
| :--: | :--: | :--: |
| 1 | pm | 为代码打mark |
| 2 | Acol | 宏定义:采用RGB256色(随机色和自定义) |
| 3 | MLog | 宏定义:去掉时间戳的NSLog |
| 4 | st | 强引用属性 |
| 5 | ass | 弱引用属性 |
| 6 | asyMain | 将代码添加到主线程中(常用于刷新UI) |


###Dash的开发者文档配置说明

#####请将下载的[**iOS9的开发者文档(百度盘)**](http://pan.baidu.com/s/1bpkKakf)放到~/Library/Developer/Shared/Documentation/DocSets/目录下