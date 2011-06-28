/*
    Copyright (c) 2004-2011, The Dojo Foundation All Rights Reserved.
    Available via Academic Free License >= 2.1 OR the modified BSD license.
    see: http://dojotoolkit.org/license for details
*/

var root = root || "";

(function(global, root) {
	var modules = global.modules = global.modules || {};
	var stack = [];
	
	/*
	var globalProps = {}
	for (var prop in global){
		if (prop != ""){
			globalProps[prop] = global[prop];
		}
	}
	*/
	
	var require = global.require = function(id) {
		var parent = stack.length > 0 ? stack[stack.length-1] : {id: "top", path: root, parent: null};
		var path;
		
		var isRelative = id.search(/^\.\/|^\.\.\//) === -1 ? false : true;
		if (isRelative) {
			var parentPath = parent.path.substring(0, parent.path.lastIndexOf('/')+1);
			path = parentPath + id;
		} else {
			if (id.charAt(0) === '/') {
				path = root+id.substring(1);
			} else {
				path = root+id;
			}
		}		
		path = normalize(path);
		//print("id = ["+id+"] path = ["+path+"] isRelative = "+isRelative);
		
	    if (modules[path]) {
	        return modules[path].exports;
	    }
	    
    	var exports = {};
    	var currentModule = {id:id, path: path, parent : parent, exports: exports};
		
		
		var mod = {}
		
		//Clone properties from globalProps
		/*for (var prop in globalProps){
			mod[prop] = globalProps[prop];
		}
		*/
		
		mod.module = currentModule;
		mod.exports = exports;
		mod.require = require;
		
    	modules[path] = mod;
		
    	stack.push(currentModule);
    	if (loadCommonJSModule(path+".js", modules[path]) === null) {
    		throw new Error("Unable to load ["+path+"]");
    	}
    	stack.pop();

		return mod.exports;
	};
	
	var normalize = function(path) {
		var segments = path.split('/');
		var skip = 0;

		for (var i = segments.length; i >= 0; i--) {
			var segment = segments[i];
			if (segment === '.') {
				segments.splice(i, 1);
			} else if (segment === '..') {
				segments.splice(i, 1);
				skip++;
			} else if (skip) {
				segments.splice(i, 1);
				skip--;
			}
		}
		return segments.join('/');
	};
})(this, root);