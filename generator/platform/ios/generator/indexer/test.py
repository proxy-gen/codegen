
from ocindex import Index
index = Index()
config_data = {
	"frameworks":[
		"/Users/wsouza/projects/ZDK/cxx-bindings-generator/ios/samples/facebook-ios-sdk/build/FacebookSDK.framework"
	],
	"interfaces":[
		{"name": "FBSession"},
		{"name": "FBRequest"}
	]
}
index.build_config_closure(config_data)
import pprint

pp = pprint.PrettyPrinter()

pp.pprint(config_data)
