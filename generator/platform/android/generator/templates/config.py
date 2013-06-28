"config" : {
#set $packages = $meta_data["packages"]
	"packages" : [
#for $package in $packages
		{
		#for $package_key in $package
			"$package_key" : "${package[$package_key]}",
		#end for
		},
#end for	
	],
#set $classes = $meta_data["classes"]
	"classes" : [
#for $clazz in $classes
		{
			"name" : "${clazz["name"]}",
			#set $functions = $clazz["functions"]
			"functions" : [
				#for $function in $functions
				{
					"name" : "${function["name"]}",
					#set $params = $function["params"]
					"params" : [
						#for $param in $params
						{
							"name" : "${param["name"]}",
						}
						#end for
					],
					#set $returns = $function["returns"]
					"returns" : [
						#for $retrn in $returns
						{
							"name" : "${retrn["name"]}",
						},
						#end for
					],
				},
				#end for
			],			
			#set $constructors = $clazz["constructors"]
			"constructors" : [	
				#for $constructor in $constructors
				{
					"name" : "${constructor["name"]}",
					#set $params = $constructor["params"]
					"params" : [
						#for $param in $params
						{
							"name" : "${param["name"]}",
						}
						#end for
					],
				},
				#end for	
			],
		},
#end for
	],
}
