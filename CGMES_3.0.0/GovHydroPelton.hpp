#ifndef GovHydroPelton_H
#define GovHydroPelton_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Area.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "VolumeFlowRate.hpp"

namespace CIMPP
{

	/*
	Detailed hydro unit - Pelton model.  This model can be used to represent the dynamic related to water tunnel and surge chamber. The DetailedHydroModelHydraulicSystem diagram, located under the GovHydroFrancis class, provides a schematic of the hydraulic system of detailed hydro unit models, such as Francis and Pelton.
	*/
	class GovHydroPelton : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPelton();
		~GovHydroPelton() override;

		CIMPP::Area av0;  /* Area of the surge tank (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;V0&lt;/sub&gt;&lt;/i&gt;). Unit = m&lt;sup&gt;2&lt;/sup&gt;. Typical value = 30. Default: nullptr */
		CIMPP::Area av1;  /* Area of the compensation tank (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;V1&lt;/sub&gt;&lt;/i&gt;). Unit = m&lt;sup&gt;2&lt;/sup&gt;. Typical value = 700. Default: nullptr */
		CIMPP::PU bp;  /* Droop (&lt;i&gt;bp&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::Frequency db1;  /* Intentional dead-band width (&lt;i&gt;DB1&lt;/i&gt;).  Unit = Hz.  Typical value = 0. Default: nullptr */
		CIMPP::Frequency db2;  /* Intentional dead-band width of valve opening error (&lt;i&gt;DB2&lt;/i&gt;). Unit = Hz.  Typical value = 0,01. Default: nullptr */
		CIMPP::Length h1;  /* Head of compensation chamber water level with respect to the level of penstock (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Unit = km.  Typical value = 0,004. Default: nullptr */
		CIMPP::Length h2;  /* Head of surge tank water level with respect to the level of penstock (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Unit = km.  Typical value = 0,040. Default: nullptr */
		CIMPP::Length hn;  /* Rated hydraulic head (&lt;i&gt;H&lt;/i&gt;&lt;i&gt;&lt;sub&gt;n&lt;/sub&gt;&lt;/i&gt;).  Unit = km.  Typical value = 0,250. Default: nullptr */
		CIMPP::PU kc;  /* Penstock loss coefficient (due to friction) (&lt;i&gt;Kc&lt;/i&gt;).  Typical value = 0,025. Default: nullptr */
		CIMPP::PU kg;  /* Water tunnel and surge chamber loss coefficient (due to friction) (&lt;i&gt;Kg&lt;/i&gt;).  Typical value = 0,025. Default: nullptr */
		CIMPP::PU qc0;  /* No-load turbine flow at nominal head (&lt;i&gt;Qc0&lt;/i&gt;).  Typical value = 0,05. Default: nullptr */
		CIMPP::VolumeFlowRate qn;  /* Rated flow (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;n&lt;/sub&gt;&lt;/i&gt;). Unit = m&lt;sup&gt;3&lt;/sup&gt;/s. Typical value = 250. Default: nullptr */
		CIMPP::Boolean simplifiedPelton;  /* Simplified Pelton model simulation (&lt;i&gt;Sflag&lt;/i&gt;). true = enable of simplified Pelton model simulation false = enable of complete Pelton model simulation (non-linear gain). Typical value = true. Default: false */
		CIMPP::Boolean staticCompensating;  /* Static compensating characteristic (&lt;i&gt;Cflag&lt;/i&gt;). It should be true if simplifiedPelton = false. true = enable of static compensating characteristic  false = inhibit of static compensating characteristic. Typical value = false. Default: false */
		CIMPP::Seconds ta;  /* Derivative gain (accelerometer time constant) (&lt;i&gt;Ta&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: nullptr */
		CIMPP::Seconds ts;  /* Gate servo time constant (&lt;i&gt;Ts&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,15. Default: nullptr */
		CIMPP::Seconds tv;  /* Servomotor integrator time constant (&lt;i&gt;Tv&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds twnc;  /* Water inertia time constant (&lt;i&gt;Twnc&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds twng;  /* Water tunnel and surge chamber inertia time constant (&lt;i&gt;Twng&lt;/i&gt;) (&amp;gt;= 0). Typical value = 3. Default: nullptr */
		CIMPP::Seconds tx;  /* Electronic integrator time constant (&lt;i&gt;Tx&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,5. Default: nullptr */
		CIMPP::Float va;  /* Maximum gate opening velocity (&lt;i&gt;Va&lt;/i&gt;).  Unit = PU / s.  Typical value = 0,06. Default: 0.0 */
		CIMPP::PU valvmax;  /* Maximum gate opening (&lt;i&gt;ValvMax&lt;/i&gt;) (&amp;gt; GovHydroPelton.valvmin).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU valvmin;  /* Minimum gate opening (&lt;i&gt;ValvMin&lt;/i&gt;) (&amp;lt; GovHydroPelton.valvmax).  Typical value = 0. Default: nullptr */
		CIMPP::PU vav;  /* Maximum servomotor valve opening velocity (&lt;i&gt;Vav&lt;/i&gt;).  Typical value = 0,1. Default: nullptr */
		CIMPP::Float vc;  /* Maximum gate closing velocity (&lt;i&gt;Vc&lt;/i&gt;).  Unit = PU / s.  Typical value = -0,06. Default: 0.0 */
		CIMPP::PU vcv;  /* Maximum servomotor valve closing velocity (&lt;i&gt;Vcv&lt;/i&gt;).  Typical value = -0,1. Default: nullptr */
		CIMPP::Boolean waterTunnelSurgeChamberSimulation;  /* Water tunnel and surge chamber simulation (&lt;i&gt;Tflag&lt;/i&gt;). true = enable of water tunnel and surge chamber simulation false = inhibit of water tunnel and surge chamber simulation. Typical value = false. Default: false */
		CIMPP::Length zsfc;  /* Head of upper water level with respect to the level of penstock (&lt;i&gt;Zsfc&lt;/i&gt;).  Unit = km.  Typical value = 0,025. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* GovHydroPelton_factory();
}
#endif