#	Default converters 
#
#
#
#

config = {
	"converters" : [
		{
			"name"		:	"convert_string",
			"objc"		:	{
								"type" : "NSString *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},	
		{
			"name"		:	"convert_error",
			"objc"		:	{
								"type" : "NSError *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_array",
			"objc"		:	{
								"type" : "NSArray *"
							},
			"cxx"		:	{
								"type" : "std::vector<void *>"
							},
		},
		{
			"name"		:	"convert_dictionary",
			"objc"		:	{
								"type" : "NSDictionary *"
							},
			"cxx"		:	{
								"type" : "std::map<void *, void *>"
							},
		},
		{
			"name"		:	"convert_url",
			"objc"		:	{
								"type" : "NSUrl *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_date",
			"objc"		:	{
								"type" : "NSDate *"
							},
			"cxx"		:	{
								"type" : "double"
							},
		},
		{
			"name"		:	"convert_locale",
			"objc"		:	{
								"type" : "NSLocale *"
							},
			"cxx"		:	{
								"type" : "std::string"
							},
		},
		{
			"name"		:	"convert_object",
			"objc"		:	{
								"type" : "id"
							},
			"cxx"		:	{
								"type" : "void *"
							},
		},
	],
}