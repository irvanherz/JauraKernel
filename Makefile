.PHONY: clean All

All:
	@echo "----------Building project:[ Kernel - Release ]----------"
	@cd "Kernel" && "$(MAKE)" -f  "Kernel.mk"
clean:
	@echo "----------Cleaning project:[ Kernel - Release ]----------"
	@cd "Kernel" && "$(MAKE)" -f  "Kernel.mk" clean
