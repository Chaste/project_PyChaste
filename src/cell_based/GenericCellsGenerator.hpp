/*

Copyright (c) 2005-2016, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef GENERICCELLSGENERATOR_HPP_
#define GENERICCELLSGENERATOR_HPP_

#include <vector>
#include "Cell.hpp"
#include "WildTypeCellMutationState.hpp"
#include "StemCellProliferativeType.hpp"
#include "TransitCellProliferativeType.hpp"
#include "RandomNumberGenerator.hpp"
#include "UniformCellCycleModel.hpp"
#include "SmartPointers.hpp"

/**
 * This class makes it easier to generate cells with the Python interface.
 */
template<unsigned DIM>
class GenericCellsGenerator
{

    unsigned mNumCells;

    boost::shared_ptr<AbstractCellProperty> mpMutationState;

    boost::shared_ptr<AbstractCellProperty> mpProliferativeType;

    boost::shared_ptr<AbstractCellCycleModel> mpCellCycleModel;

public:

    GenericCellsGenerator();

    ~GenericCellsGenerator();

    void SetCellMutationState(boost::shared_ptr<AbstractCellProperty> pMutationState);

    void SetCellProliferativeType(boost::shared_ptr<AbstractCellProperty> pProliferativeType);

    void SetCellCycleModel(boost::shared_ptr<AbstractCellCycleModel> pCellCycleModel);

    void SetNumCells(unsigned numCells);

    /**
     * Fills a vector of cells with a specified cell-cycle model, to match
     * a given number of cells. Gives them birth times of 0 for node 0,
     * -1 for node 1, -2 for node 2 etc...
     *
     * @param numCells  The number of cells to generate.
     */
    std::vector<CellPtr> GenerateBasic();

};

#endif /* GENERICCELLSGENERATOR_HPP_ */
