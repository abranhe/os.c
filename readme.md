<p align="center">
	<br>
	<img src="https://cdn.abranhe.com/projects/os/os.svg" width="300px">
	<br>
	<br>
	<b>os.c</b>: Small C library to know your operating system.
	<br>
</p>

<p align="center">
	<a href="https://travis-ci.org/abranhe/os.c"><img src="https://img.shields.io/travis/abranhe/os.c.svg?logo=travis" /></a>
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg" /></a>
	<a href="https://github.com/abranhe/os.c/blob/master/license"><img src="https://img.shields.io/github/license/abranhe/os.c.svg" /></a>
  <br>
  <br>
</p>


## Installation

*Installing using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/os.c
```

## Usage

```c
#include <stdio.h>
#include "os.h"

int main()
{
	printf("%s\n", operating_system());
	// macOS
	return 0;
}
```

## API

#### `char * operating_system();`

*Return the operating system you are using.*

###### Params:

- `void`: It takes no arguments

###### Available operating systems

| Operating System | `operating_system()` |
|:---------------- | :------------------- |
| Window 32        | `win32`              |
| Window 64        | `win64`              |
| Unix             | `unix`               |
| Linux            | `linux`              |
| Free BSD         | `freeBSD`            |
| Other            | `other`              |

## Related

- [os][os]: cli tool for this library.
## Team

|[![Carlos Abraham Logo][abranhe-img]][abranhe]|
| :-: |
| [Carlos Abraham][abranhe] |

## License

[MIT][license] License © [Carlos Abraham][abranhe]

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/os.c/blob/master/license
[example]: https://github.com/abranhe/os.c/blob/master/example.c
[os]: https://github.com/abranhe/os
[travis-badge]: https://img.shields.io/travis/abranhe/os.c.svg
[travis-status]: https://travis-ci.org/abranhe/os.c
[coverage-badge]: https://img.shields.io/coveralls/abranhe/os.c.svg
[coverage-status]: https://coveralls.io/r/abranhe/os.c?branch=master
