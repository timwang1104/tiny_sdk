#ifndef TINY_PLATFORM_H__
#define TINY_PLATFORM_H__

#include <stdint.h>

/* Helper functions */
static inline uint8_t  inb(uintptr_t addr)  { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr)  { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr)  { return *(volatile uint32_t *)addr; }
static inline uint64_t inll(uintptr_t addr) { return *(volatile uint64_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data)  { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data)  { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data)  { *(volatile uint32_t *)addr = data; }
static inline void outll(uintptr_t addr, uint64_t data) { *(volatile uint64_t *)addr = data; }


#endif