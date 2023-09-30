/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(1) */
/* BINDTOOL_USE_PYGCCXML(1) */
/* BINDTOOL_HEADER_FILE(afsk_mod_bf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9662b2833a5fdb11663f4077a2fd4cdd) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/afsk_mod_bf.h>
// pydoc.h is automatically generated in the build directory
#include <afsk_mod_bf_pydoc.h>

void bind_afsk_mod_bf(py::module& m)
{

    using afsk_mod_bf = gr::digital::afsk_mod_bf;

    py::class_<afsk_mod_bf, gr::block, gr::basic_block, std::shared_ptr<afsk_mod_bf>>(
        m, "afsk_mod_bf", D(afsk_mod_bf))

        .def(py::init(&afsk_mod_bf::make),
             py::arg("samp_rate") = 48000,
             py::arg("freq_zero") = 1200.0,
             py::arg("freq_one") = 2200.0,
             py::arg("bit_rate") = 1200,
             py::arg("bits") = true,
             py::arg("endianness") = gr::GR_LSB_FIRST,
             D(afsk_mod_bf, make))

        ;
}
