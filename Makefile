.PHONY: clean All

All:
	@echo "----------Building project:[ Changer - Release ]----------"
	@cd "Changer" && "$(MAKE)" -f  "Changer.mk"
clean:
	@echo "----------Cleaning project:[ Changer - Release ]----------"
	@cd "Changer" && "$(MAKE)" -f  "Changer.mk" clean
