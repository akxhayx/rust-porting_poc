# AUTOSAR Rust PoC 
This repository contains a Proof-of-Concept (PoC) for migrating AUTOSAR Classic Application Layer code from C to Rust. 
 
## Features Validated 
- Rust no_std application layer 
- AUTOSAR RTE (C)  Rust FFI 
- Deterministic execution (panic=abort) 
- MSVC toolchain compatibility 
 
## What Remains Unchanged 
- MCAL 
- BSW core services 
- Direct hardware access 
 
## Why It Matters 
- Memory safety in SW-Cs 
- Zero runtime overhead 
- Incremental migration possible 
