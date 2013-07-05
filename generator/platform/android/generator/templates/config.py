config = {
#set $converters = $config_data["converters"]
	"converters" : [
#for $converter in $converters
		{
		#for converter_key in $converter
			#set $converter_value = $converter[$converter_key]
			#if $type($converter_value) == str
			"$converter_key" : "$converter_value",
			#else
			"$converter_key" : $converter_value,
			#end if
		#end for
		}
#end for
	],
#set $packages = $config_data["packages"]
	"packages" : [
#for $package in $packages
		{
		#for $package_key in $package
			#set $package_value = $package[$package_key]
			#if $type($package_value) == str
			"$package_key" : "$package_value",
			#else
			"$package_key" : $package_value,
			#end if
		#end for
		},
#end for	
	],
#set $classes = $config_data["classes"]
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
						#for param_key in $param
							#set $param_value = $param[$param_key]
							#if $type($param_value) == str
							"$param_key" : "$param_value",
							#else
							"$param_key" : $param_value,
							#end if
						#end for
						}
						#end for
					],
					#set $returns = $function["returns"]
					"returns" : [
						#for $retrn in $returns
						{
						#for retrn_key in $retrn
							#set $retrn_value = $retrn[$retrn_key]
							#if $type($retrn_value) == str
							"$retrn_key" : "$retrn_value",
							#else
							"$retrn_key" : $retrn_value,
							#end if
						#end for
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
						#for $param_key in $param
							#set $param_value = $param[$param_key]
							#if $type($param_value) == str
							"$param_key" : "$param_value",
							#else
							"$param_key" : $param_value,
							#end if
						#end for
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
