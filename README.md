# explore-pybind11

## SetUp

```bash
git clone --recurse-submodules -j8 git@github.com:deependujha/explore-pybind11.git
```

> -j8 is an optional performance optimization, fetches up to 8 submodules at a time in parallel

---

## VSCode issue: `python.h` not found

- Check if `python.h` is present in the following path:

```python
import sysconfig

print(sysconfig.get_path('include'))
```

- Run the above python code, and if present, add it to the `includePath` in `.vscode/c_cpp_properties.json`
