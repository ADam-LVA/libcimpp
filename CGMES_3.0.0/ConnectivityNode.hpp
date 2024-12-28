#ifndef ConnectivityNode_H
#define ConnectivityNode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class BoundaryPoint;
	class ConnectivityNodeContainer;
	class Terminal;
	class TopologicalNode;

	/*
	Connectivity nodes are points where terminals of AC conducting equipment are connected together with zero impedance.
	*/
	class ConnectivityNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ConnectivityNode();
		~ConnectivityNode() override;

		CIMPP::BoundaryPoint* BoundaryPoint;  /* The boundary point associated with the connectivity node. Default: 0 */
		CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer;  /* Container of this connectivity node. Default: 0 */
		std::list<CIMPP::Terminal*> Terminals;  /* Terminals interconnected with zero impedance at a this connectivity node. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;  /* The topological node to which this connectivity node is assigned.  May depend on the current state of switches in the network. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* ConnectivityNode_factory();
}
#endif
