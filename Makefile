.PHONY: clean All

All:
	@echo "----------Building project:[ BankProject - Debug ]----------"
	@cd "Account" && "$(MAKE)" -f  "BankProject.mk"
clean:
	@echo "----------Cleaning project:[ BankProject - Debug ]----------"
	@cd "Account" && "$(MAKE)" -f  "BankProject.mk" clean
