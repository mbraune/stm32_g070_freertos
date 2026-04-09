  clean, robust FreeRTOS example for the Nucleo‑G070RB with
	Task 1: LED task → toggles LED_GREEN with a variable delay
	Task 2: Button task → detects button press and increases the delay
	Task 3: Monitor task → prints the current delay (optional but useful)

	hardware-accurate for the G070RB:
	LED_GREEN = PA5
	USER button = PC13 (active‑low)

	FreeRTOS Task Structure:
		A global delay variable (protected by a mutex)
		Button task updates the delay
		LED task reads the delay and toggles
		Monitor task prints the delay every second
