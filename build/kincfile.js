let fs = require('fs');
let path = require('path');
let project = new Project('Main');
project.version = '1.0';
project.addDefine('HXCPP_API_LEVEL=400');
project.addDefine('HXCPP_DEBUG', 'Debug');
project.addDefine('HXCPP_GC_GENERATIONAL');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{},"xboxOne":{},"playStation4":{},"switch":{}};
project.setDebugDir('build/linux');
await project.addProject('build/linux-build');
await project.addProject('/home/mixer/tools/Kha');
if (fs.existsSync(path.join('/home/mixer/.haxe/libs/haxeui-core', 'kincfile.js')) || fs.existsSync(path.join('/home/mixer/.haxe/libs/haxeui-core', 'korefile.js'))) {
	await project.addProject('/home/mixer/.haxe/libs/haxeui-core');
}
if (fs.existsSync(path.join('/home/mixer/.haxe/libs/hscript', 'kincfile.js')) || fs.existsSync(path.join('/home/mixer/.haxe/libs/hscript', 'korefile.js'))) {
	await project.addProject('/home/mixer/.haxe/libs/hscript');
}
if (fs.existsSync(path.join('/home/mixer/.haxe/libs/haxeui-kha', 'kincfile.js')) || fs.existsSync(path.join('/home/mixer/.haxe/libs/haxeui-kha', 'korefile.js'))) {
	await project.addProject('/home/mixer/.haxe/libs/haxeui-kha');
}
resolve(project);
