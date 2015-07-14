/**********************************************************************
 *  Copyright (c) 2008-2015, Alliance for Sustainable Energy.
 *  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **********************************************************************/

#ifndef MODEL_PIPEOUTDOOR_IMPL_HPP
#define MODEL_PIPEOUTDOOR_IMPL_HPP

#include <model/ModelAPI.hpp>
#include "StraightComponent_Impl.hpp"

namespace openstudio {
namespace model {

class Construction;
class Connection;
class Connection;
class Node;

namespace detail {

  /** PipeOutdoor_Impl is a StraightComponent_Impl that is the implementation class for PipeOutdoor.*/
  class MODEL_API PipeOutdoor_Impl : public StraightComponent_Impl {
   public:
    /** @name Constructors and Destructors */
    //@{

    PipeOutdoor_Impl(const IdfObject& idfObject,
                     Model_Impl* model,
                     bool keepHandle);

    PipeOutdoor_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                     Model_Impl* model,
                     bool keepHandle);

    PipeOutdoor_Impl(const PipeOutdoor_Impl& other,
                     Model_Impl* model,
                     bool keepHandle);

    virtual ~PipeOutdoor_Impl() {}

    //@}
    /** @name Virtual Methods */
    //@{

    virtual const std::vector<std::string>& outputVariableNames() const;

    virtual IddObjectType iddObjectType() const;

    //@}
    /** @name Getters */
    //@{

    virtual unsigned inletPort() override;

    virtual unsigned outletPort() override;

    boost::optional<Construction> construction() const;

    boost::optional<Connection> fluidInletNode() const;

    boost::optional<Connection> fluidOutletNode() const;

    boost::optional<Node> ambientTemperatureOutdoorAirNode() const;

    double pipeInsideDiameter() const;

    double pipeLength() const;

    //@}
    /** @name Setters */
    //@{

    bool setConstruction(const boost::optional<Construction>& construction);

    void resetConstruction();

    bool setFluidInletNode(const boost::optional<Connection>& connection);

    void resetFluidInletNode();

    bool setFluidOutletNode(const boost::optional<Connection>& connection);

    void resetFluidOutletNode();

    bool setAmbientTemperatureOutdoorAirNode(const boost::optional<Node>& node);

    void resetAmbientTemperatureOutdoorAirNode();

    bool setPipeInsideDiameter(double pipeInsideDiameter);

    bool setPipeLength(double pipeLength);

    //@}
    /** @name Other */
    //@{

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.PipeOutdoor");
  };

} // detail

} // model
} // openstudio

#endif // MODEL_PIPEOUTDOOR_IMPL_HPP

