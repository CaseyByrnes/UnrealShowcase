import unreal

MATERIAL_PATH = '/Game/Megascans/3D_Plants/Dragon_Tree_wfypejzha/MI_Dragon_Tree_wfypejzha_1K.MI_Dragon_Tree_wfypejzha_1K'

should_select = False
static_mesh_comp = actor.get_component_by_class(unreal.StaticMeshComponent)
if static_mesh_comp:
    static_mesh = static_mesh_comp.get_editor_property('static_mesh')
    if static_mesh:
        material = static_mesh.get_material(0)
        if material and (material.get_path_name() == MATERIAL_PATH):
            should_select = True