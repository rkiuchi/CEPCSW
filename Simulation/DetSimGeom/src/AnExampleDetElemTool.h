#ifndef AnExampleDetElemTool_h
#define AnExampleDetElemTool_h

#include "GaudiKernel/AlgTool.h"
#include "GaudiKernel/Property.h"
#include "DetSimInterface/IDetElemTool.h"
#include "G4SystemOfUnits.hh"
#include "G4PhysicalConstants.hh"

#include "DetInterface/IGeoSvc.h"


class AnExampleDetElemTool: public extends<AlgTool, IDetElemTool> {

public:
    using extends::extends;

    G4LogicalVolume* getLV() override;
    void ConstructSDandField() override;

    StatusCode initialize() override;
    StatusCode finalize() override;

private:
    Gaudi::Property<double> m_x{this, "X", 30.*m};
    Gaudi::Property<double> m_y{this, "Y", 30.*m};
    Gaudi::Property<double> m_z{this, "Z", 30.*m};
    // DD4hep XML compact file path
    Gaudi::Property<std::string> m_dd4hep_xmls{this, "detxml"};

    SmartIF<IGeoSvc> m_geosvc;

};

#endif
