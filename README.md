# Gubo

Voxel, Procedural 3D Block Engine and Suite for the U++ Ecosystem.

Part of the [OuluBSD](https://github.com/OuluBSD) project.

---

## Overview

`Gubo` provides a high-performance voxel and procedural block manipulation engine, modularized and decoupled from monolithic dependencies:

| Component | Package | Description |
|---|---|---|
| **Cuboid Drawing** | `Draw/Cuboid` | 3D voxel box primitive rendering and transformations |
| **Voxel Core** | `GuboCore` | Block data structures, spatial coordinates, and voxel containers |
| **Voxel Controls** | `GuboCtrl` | Interactive UI widgets for voxel manipulation and camera navigation |
| **Voxel Library** | `GuboLib` | Procedural block generation, meshing algorithms, and physics primitives |
| **Voxel Suite** | `GuboSuite` | Integrated voxel scene editor and application suite |

---

## Building & Verification

`Gubo` builds with [UppBuilder](https://github.com/OuluBSD/UppBuilder) across Linux, macOS, and Windows:

```bash
# Build and run verification test suite
uppbuilder tests/GuboCheck -m CLANG --bazaarcore /path/to/BazaarCore --uppgeometry /path/to/UppGeometry -v
./bin/GuboCheck
```

---

## Continuous Integration

`Gubo` maintains an automated 4-platform CI matrix:
- **Ubuntu Linux Clang** (`CLANG`)
- **Ubuntu Linux GCC** (`GCC`)
- **macOS Apple Silicon Clang** (`CLANG_macOS`)
- **Windows MSVC** (`MSVS22x64`)

---

## License

BSD 2-Clause License (see [LICENSE](LICENSE)).
