// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef FILEIO_H
#define FILEIO_H

#include <memory>

namespace FileIO {
    using File = std::unique_ptr<int>;

    File openFile(const std::string &filepath);
};

#endif // FILEIO_H
