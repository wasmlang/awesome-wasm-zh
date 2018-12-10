
c4Run = Module.cwrap('c4Run', 'number', ['string', 'number', 'number'])

// node c4.js data/hello.c
if(ENVIRONMENT_IS_NODE) {
	var name = ''
	var printSource = 0
	var isDebugMode = 0

	if(process['argv'].length) {
		for(var i = 2; i < process['argv'].length; i = i+1) {
			if(process['argv'][i] == '-s') {
				printSource = 1
				continue
			}
			if(process['argv'][i] == '-d') {
				isDebugMode = 1
				continue
			}

			name = process['argv'][i]
		}
	}

	if(name != '') {
		c4Run(name, printSource, isDebugMode)
	}
}
