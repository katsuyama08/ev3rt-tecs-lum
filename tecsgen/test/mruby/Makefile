TECSGEN_EXE=tecsgen

total :
	cd MrubyBridge-ASP ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-ASP3 ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-SimpleSample ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-TECSInfo ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-TECSInfoCompo ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-region ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyBridge-test ; make allall TECSGEN=$(TECSGEN_EXE)
	cd mrubycellplugin ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyInfoBridge-SimpleSample ; make allall TECSGEN=$(TECSGEN_EXE)
	cd MrubyInfoBridge-test ; make allall TECSGEN=$(TECSGEN_EXE)

clean:
	cd MrubyBridge-ASP ; make clean
	cd MrubyBridge-ASP3 ; make clean
	cd MrubyBridge-SimpleSample ; make clean
	cd MrubyBridge-TECSInfo ; make clean
	cd MrubyBridge-TECSInfoCompo ; make clean
	cd MrubyBridge-region ; make clean
	cd MrubyBridge-test ; make clean
	cd mrubycellplugin ; make clean
	cd MrubyInfoBridge-SimpleSample ; make clean
	cd MrubyInfoBridge-test ; make clean

test_exec :
	@echo ===== MrubyBridge-ASP =====
	@./MrubyBridge-ASP/MrubyBridge-ASP.exe ./MrubyBridge-ASP/test.rb
	@echo ===== MrubyBridge-ASP3 =====
	@./MrubyBridge-ASP3/MrubyBridge-ASP.exe ./MrubyBridge-ASP3/test.rb
	@echo ===== MrubyBridge-region =====
	@./MrubyBridge-region/SimpleSample.exe ./MrubyBridge-region/SimpleSample.rb
	@echo ===== MrubyBridge-SimpleSample =====
	@./MrubyBridge-SimpleSample/SimpleSample.exe ./MrubyBridge-SimpleSample/SimpleSample.rb
	@echo ===== MrubyBridge-test =====
	@./MrubyBridge-test/test.exe ./MrubyBridge-test/test.rb
	@echo ===== MrubyBridge-test 2 =====
	@./MrubyBridge-test/test.exe  ./MrubyBridge-test/test2.rb
	@echo ===== MrubyBridge-TECSInfo =====
	@./MrubyBridge-TECSInfo/SimpleSample.exe ./MrubyBridge-TECSInfo/SimpleSample.rb
	@echo ===== MrubyBridge-TECSInfoCompo =====
	@./MrubyBridge-TECSInfoCompo/SimpleSample.exe ./MrubyBridge-TECSInfoCompo/SimpleSample.rb
	@echo ===== mrubycellplugin =====
	@./mrubycellplugin/mrubycellplugin.exe ./mrubycellplugin/script.rb
	@echo ===== MrubyInfoBridge-SimpleSample =====
	@./MrubyInfoBridge-SimpleSample/SimpleSample.exe ./MrubyInfoBridge-SimpleSample/SimpleSample.rb
	@echo ===== MrubyInfoBridge-test =====
	@cd MrubyInfoBridge-test; ./test.exe
