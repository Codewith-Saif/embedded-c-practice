# Bitwise Operations

A collection of Embedded C programs focused on low-level bit manipulation and register operations.

## Topics Covered

- Setting and clearing individual bits
- Bit masks and bit positions
- 32-bit register manipulation
- Finding the highest set bit
- Bitwise operation macros
- Status register decoding
- Bit spreading and bit interleaving
- Macro-based register configuration

## Programs

| Program | Concept |
|---|---|
| `01_set_or_clear_bit.c` | Set or clear a specific bit |
| `02_set_specific_bits_32bit.c` | Set multiple bits in a 32-bit register |
| `03_highest_set_bit.c` | Isolate the highest set bit |
| `04_bit_operations_macros.c` | Reusable bit manipulation macros |
| `05_decode_status_register.c` | Decode register bits into status flags |
| `06_bit_spreading.c` | Interleave bits with zeros |
| `07_register_config_helper.c` | Macro-based register configuration |

## Key Concepts

The programs use:

- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Bitwise NOT (`~`)
- Left and right shifts (`<<`, `>>`)
- Masks
- Register fields
- C preprocessor macros
- Fixed-width integer types
