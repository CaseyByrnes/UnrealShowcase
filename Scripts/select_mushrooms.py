import unreal

MATERIAL_PATH = '/Game/Megascans/3D_Assets/Spotted_Red_Mushrooms_rdlvW/MI_Spotted_Red_Mushrooms_rdlvW_1K.MI_Spotted_Red_Mushrooms_rdlvW_1K'
MATERIAL_PATH_2 = '/Game/Megascans/3D_Assets/White_Button_Mushroom_pdww2/MI_White_Button_Mushroom_pdww2_1K.MI_White_Button_Mushroom_pdww2_1K'

should_select = False
static_mesh_comp = actor.get_component_by_class(unreal.StaticMeshComponent)
if static_mesh_comp:
    static_mesh = static_mesh_comp.get_editor_property('static_mesh')
    if static_mesh:
        material = static_mesh.get_material(0)
        if material:
            mat_path_name = material.get_path_name()
            if (mat_path_name == MATERIAL_PATH) or (mat_path_name == MATERIAL_PATH_2):
                should_select = True